#include<bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
	int size = nums.size();
	vector<int>prifix(size, 1);
	vector<int>suffix(size, 1);
	vector<int>ans;
	for (int i = 1 ; i < size ; i++) {
		prifix[i] = prifix[i - 1] * nums[i - 1];
	}
	for (int i = size - 2; i >= 0; i--) {
		suffix[i] = suffix[i + 1] * nums[i + 1];
	}
	for (int i = 0 ; i < size; i++) {
		ans.push_back(suffix[i] * prifix[i]);
	}
	return ans;
}


int32_t main() {

	return 0 ;
}