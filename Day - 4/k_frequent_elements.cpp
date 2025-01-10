#include<bits/stdc++.h>
using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) {
	unordered_map<int, int>mp;
	int sizeOfNums = nums.size();
	for (int i = 0; i < sizeOfNums; i++) {
		mp[nums[i]]++;
	}
	vector<vector<int>>secondaryAns(sizeOfNums + 1);
	for (const auto &i : mp) {
		secondaryAns[i.second].push_back(i.first);
	}
	vector<int>finalAns;
	for (int i = sizeOfNums; i >= 0; i--) {
		if (secondaryAns[i].size() != 0 and finalAns.size() < k) {
			for (const auto &j : secondaryAns[i]) {
				finalAns.push_back(j);
			}
		}
		else if (finalAns.size() >= k ) {
			break;
		}
	}
	return finalAns;
}

int32_t main() {
	vector<int>nums = {1, 1, 1, 2, 2, 3};
	int k = 2;
	vector<int>ans =  topKFrequent(nums, k);
	for (const auto &i : ans) {
		cout << i << endl;
	}
	return 0 ;
}