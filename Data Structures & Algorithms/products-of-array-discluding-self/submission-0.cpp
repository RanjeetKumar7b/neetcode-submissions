class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>lhs(n);
        vector<int>rhs(n);
        lhs[0]=1;
        rhs[n-1]=1;
        for(int i=1;i<n;i++){
            lhs[i] = nums[i-1] * lhs[i-1];
        }
        for(int i=n-2;i>=0;i--){
            rhs[i] = nums[i+1] * rhs[i+1];
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            long long p = lhs[i]*rhs[i];
            ans.push_back(p);
        }
        return ans;
    }
};

// 1 -1 0 0 0
// 0  6 6 3 1
// 0 -6 0 0 0
