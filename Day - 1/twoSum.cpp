class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        int size = nums.size();  
        vector<int>ans;
        for(int i = 0; i < size; i++){
            int res = target - nums[i]; 
            if(mp.find(res) != mp.end()){
                ans.push_back(i); 
                ans.push_back(mp[res]);
                return ans;  
            }else {
                mp[nums[i]] = i; 
            }
        } 
        return {};
    }
};