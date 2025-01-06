#include"bits/stdc++.h"
using namespace std; 


class Solution {
public:
    bool isSubsequence(string s, string t) {
        stack<char>st ;
        int sizeOfS = s.size(); 
        for(int i = 0; i < sizeOfS; i++) {
            st.push(s[i]); 
        } 
        int sizeOfT = t.size(); 
        for(int i = sizeOfT - 1; i >= 0; i--){
            if(!st.empty() and st.top() == t[i]){
                st.pop(); 
            }
        }
        if(st.empty()){
            return true; 
        }else {
            return false; 
        }
    }
};