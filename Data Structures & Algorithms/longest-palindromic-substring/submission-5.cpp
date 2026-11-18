class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        vector<vector<bool>>dp(n,vector<bool>(n,false));
        int maxi = 1;
        int l=0,r=0;
        for(int i=n-1;i>=0;i--){
            for(int j=i;j<n;j++){
                if(s[i]==s[j] && (j-i<=2 || dp[i+1][j-1])){
                    if(j-i+1>maxi){
                        maxi=j-i+1;
                        l=i;
                    }
                    dp[i][j]=true;
                }
            }
        }
        string str = s.substr(l, maxi);
        return str;
    }
};
