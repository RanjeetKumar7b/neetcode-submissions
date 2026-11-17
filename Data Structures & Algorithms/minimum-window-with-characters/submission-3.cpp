class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>mp;
        for(int i=0;i<t.length();i++){
            mp[t[i]]++;
        }
        int count = mp.size();
        int start=0,startMin=0,end=0;
        int len=INT_MAX;
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])!=mp.end()){
                mp[s[i]]--;
                if(mp[s[i]]==0){
                    count--;
                }
            }
            while(count==0){
                while(mp.find(s[start])==mp.end()){
                    start++;
                }
                if(len>i-start+1){
                    len=i-start+1;
                    end=i;
                    startMin=start;
                }
                mp[s[start]]++;
                if(mp[s[start]]>0)count++;
                start++;
            }
        }
        if(len==INT_MAX){
            return "";
        }
        string ans=s.substr(startMin,len);
        return ans;
        

    }
};

