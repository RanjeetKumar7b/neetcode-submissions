class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int>ans;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            int item = target- nums[i];
            if(!mp.empty() && mp.find(item)!=mp.end()){
                ans.push_back(mp[item]);
                ans.push_back(i);
                return ans;
            }
            mp[nums[i]]=i;
        }
        return ans;
    }
};
