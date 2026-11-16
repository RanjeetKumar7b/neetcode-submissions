class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>lhs(n);
        vector<int>rhs(n);
        lhs[0]=nums[0];
        rhs[n-1]=nums[n-1];
        for(int i=1;i<n;i++){
            lhs[i] = nums[i] * lhs[i-1];
        }
        for(int i=n-2;i>=0;i--){
            rhs[i] = nums[i] * rhs[i+1];
        }
        vector<int>ans(n);
        ans[0]=rhs[1];
        ans[n-1]=lhs[n-2];
        for(int i=1;i<n-1;i++){
            long long p = lhs[i-1]*rhs[i+1];
            ans[i]=p;
        }
        return ans;
    }
};

// 1 -1 0 0 0
// 0  6 6 3 1
// 0 -6 0 0 0
