#LeetCode Submission Id- https://leetcode.com/problems/design-a-stack-with-increment-operation/submissions/1279857139/

class CustomStack(object):
    def __init__(self, maxSize):
        """
        :type maxSize: int
        """
        self.stack=[]
        self.__maxSize=maxSize
    def push(self, x):
        """
        :type x: int
        :rtype: None
        """
        if len(self.stack)<self.__maxSize:
            self.stack.append(x)
    def pop(self):
        """
        :rtype: int
        """
        if len(self.stack)==0:
            return -1
        temp=self.stack[len(self.stack)-1]
        del self.stack[len(self.stack)-1]
        return temp

    def increment(self, k, val):
        """
        :type k: int
        :type val: int
        :rtype: None
        """
        if (len(self.stack)<k):
            for i in range(len(self.stack)):
                self.stack[i]+=val
        else:
            l=[]
            for i in range(len(self.stack)-k):
                temp=self.stack[len(self.stack)-1]
                del self.stack[len(self.stack)-1]
                l.append(temp)
            for i in range(k):
                temp=self.stack[len(self.stack)-1]
                del self.stack[len(self.stack)-1]
                l.append(temp+val)
            for i in range(len(l)-1,-1,-1):
                self.stack.append(l[i])




        


# Your CustomStack object will be instantiated and called as such:
# obj = CustomStack(maxSize)
# obj.push(x)
# param_2 = obj.pop()
# obj.increment(k,val)