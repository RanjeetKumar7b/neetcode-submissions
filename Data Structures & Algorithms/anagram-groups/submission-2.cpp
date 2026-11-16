class Solution {
public:
//brute force
    // bool isAnnagrams(string s1, string s2){
    //     int n=s1.length();
    //     int m=s2.length();
    //     if(n!=m)return false;
    //     vector<int>v(26,0);
    //     for(int i=0;i<n;i++){
    //         v[s1[i]-'a']++;
    //         v[s2[i]-'a']--;
    //     }
    //     for(int i=0;i<26;i++){
    //         if(v[i]!=0){
    //             return false;
    //         }
    //     }
    //     return true;
    // }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // vector<vector<string>>ans;
        // set<string>st;
        // int n = strs.size();
        // int t=n;

        // for(int i=0;i<t;i++){
        //     vector<string>temp;
            
        //     if(st.find(strs[i])==st.end()){
        //         temp.push_back(strs[i]);
        //         for(int j=i+1;j<t;j++){
        //             if(isAnnagrams(strs[j], strs[i])){
        //                 temp.push_back(strs[j]);
        //                 st.insert(strs[j]);
        //             }
        //        }  
        //        ans.push_back(temp);   
        //     }
                
        // }
        // return ans;

        unordered_map<string, vector<string>>mp;
        int n= strs.size();
        for(int i=0;i<n;i++){
            string s=strs[i];
            sort(s.begin(),s.end());
            mp[s].push_back(strs[i]);
        }
        vector<vector<string>>ans;
        for(auto x:mp){
            ans.push_back(x.second);
        }
        return ans;
    }
};
