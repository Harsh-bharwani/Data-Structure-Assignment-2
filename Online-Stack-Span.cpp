#include<bits/stdc++.h>
using namespace std;

// LeetCode Submission Id- https://leetcode.com/problems/online-stock-span/submissions/1275623748/

class StockSpanner {
public:
    vector<int> v;
    StockSpanner() {
        
    }
    int next(int price) {
        int count=0;
        v.push_back(price);
        for(int i=v.size()-1;i>=0;i--){
            if (v[i]<=price){
                count+=1;
            }
            else{
                break;
            }
        }
        return count;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */