#include"bits/stdc++.h" 
using namespace std; 


int getSecondLargest(vector<int> &arr) {
        // Code Here 
        int largest = 0; 
        int secondLargest = -1; 
        for(auto &i : arr){
            if (i > largest) {
                if(largest != 0) {
                    secondLargest = largest; 
                }
                largest = i ;  
                
            }
            else if(i < largest and i > secondLargest){ 
                secondLargest = i ;
            }  
            
        } 
        if(secondLargest == -1) {
            return -1; 
        }
        else {
            return secondLargest; 
        }
    }


int32_t main() {
    vector<int> arr = {1, 2, 3, 4, 5}; 
    cout << getSecondLargest(arr) << endl; 
    return 0;
}