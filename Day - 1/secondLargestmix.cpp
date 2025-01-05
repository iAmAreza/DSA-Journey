#include"bits/stdc++.h"
using namespace std; 


int SecondLargetMix(vector<int> &arr){
    int largest = INT_MIN + 1; 
    int secondLarge = INT_MIN; 
    for(auto &i : arr){
        if(i > largest){
            if(largest != INT_MIN + 1){
                secondLarge = largest; 
            }
            largest = i; 
        }
        else if(i < largest and i > secondLarge){
            secondLarge = i; 
        }
    } 
    if(secondLarge == INT_MIN){
        return -1; 
    }
    else {
        return secondLarge; 
    }
}


int main() {
    vector<int> arr = {-1, -2, -3, -4, 5}; 
    cout << SecondLargetMix(arr) << endl; 
    return 0;
}