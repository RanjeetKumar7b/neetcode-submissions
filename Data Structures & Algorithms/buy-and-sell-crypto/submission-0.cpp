class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        // if(n==1)return prices[0];
        int left[n];
        left[0]=prices[0];
        int ans=0;
        for(int i=1;i<n;i++){
            ans = max(ans, (prices[i] - left[i-1]));
            left[i]=min(prices[i],left[i-1]); 
        }
        return ans;
    }
};

// 10, 1, 1, 1, 1
//  7, 7, 7, 7, 1, 
