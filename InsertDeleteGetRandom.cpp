#include<bits/stdc++.h>
using namespace std;

// LeetCode Submission Id- https://leetcode.com/problems/insert-delete-getrandom-o1/submissions/1273926023/
class RandomizedSet {
public:
    vector<int> v;
    int size;
    RandomizedSet() {
        // size=0;
    }
    bool is_empty(){
        return v.size()==0;
    }
    bool insert(int val) {
        if (is_empty()){
            v.push_back(val);
            return true;
        }
        else{
            for(size_t i=0;i<v.size();i++){
                if (v[i]==val){
                    return false;
                }
            }
            
            v.push_back(val);
            return true;
        }
    }
    
    bool remove(int val) {
        for(size_t i=0;i<v.size();i++){
            if (v[i]==val){
                v.erase(v.begin()+i);
                return true;
            }
        }
        return false;
    }
    
    int getRandom() {
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> dis(0, v.size() - 1);
    int randomIndex = dis(gen);
    int randomElement = v[randomIndex];
    return randomElement;
    }
};


/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */