#include"bits/stdc++.h"
using namespace std;

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxRight = INT_MIN; 
        int size = arr.size();
        int var = arr[size - 1];  
        for(int i = size - 2; i >= 0; i--){
            maxRight = max(maxRight,var); 
            var = arr[i]; 
            arr[i] = maxRight; 
        }
        arr[size - 1] = -1; 
        return arr; 
        
    }
};