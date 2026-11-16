class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>frequency(26,0);
        int n = s.length();
        int m = t.length();
        if(n!=m)return false;
        for(int i=0;i<n;i++){
            char c1 = s[i];
            char c2 = t[i];
            frequency[c1-'a']++;
            frequency[c2-'a']--;
        }
        for(int i=0;i<26;i++){
            cout<<"char "<<frequency[i]<<endl;
            if(frequency[i]!=0){
                return false;
            }
        }
        return true;
    }
};
