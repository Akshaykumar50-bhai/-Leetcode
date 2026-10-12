class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = strs[0];
        if(strs.size() == 1) return strs[0];
        int ans = 1e9;
        for(int i = 1;i<strs.size();i++){
           int j= 0 ,cnt =0;
           string s1 = strs[i];
           string s2 = strs[i-1];
           while(j < s1.length()){
            if(s[j] == s1[j]) cnt++;
            else break;
            j++;
           }
           ans = min(ans, cnt);
        }
   
        string s1 = strs[0];
        string res ="";
        if(ans == 1e9) return "";
        for(int i=0;i<ans;i++){
        res += s1[i];
        }
        return res;
    }
};