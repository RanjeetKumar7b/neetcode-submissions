class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        int start=0;
        int ans=0;
        for(int i=1;i<n;i++){
            ans = max(ans, (prices[i] - prices[start]));
            if(prices[i]<prices[start]){
                start = i;
            }
        }
        return ans;
    }
};

// 10, 1, 1, 1, 1
//  7, 7, 7, 7, 1, 
