#include<bits/stdc++.h>
using namespace std;

// LeetCode Submission Id- https://leetcode.com/problems/implement-stack-using-queues/submissions/1273516014/
class MyStack {
public:
    queue<int> q;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        int i=0;
        while(i<q.size()-1){
            int temp=q.front();
            q.pop();
            q.push(temp);
            i++;
        }
        int ret=q.front();
        q.pop();
        return ret;
    }
    
    int top() {int i=0;
        return q.back();
    }
    
    bool empty() {
        return q.size()==0;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */