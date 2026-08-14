class Solution {
public:
        int maximumLengthSubstring(string s) {
        unordered_map<char,int>ans;
        int fcnt = 0 ,left = 0,cnt=0;
        for(int i=0;i<s.length();i++){
             if(ans[s[i]] <= 1){
                ans[s[i]]++;
                cnt++;
             }else if(ans[s[i]] == 2 ){
                fcnt = max(fcnt , cnt);
                 for(int j=left;j<s.length();j++){
                    if(s[i] == s[j] ){
                         left = j;
                         break;
                         }
                         cnt--;
                         ans[s[j]]--;
                 }
                 left++;
                                 
             }
        }
        fcnt = max(fcnt , cnt);
        return fcnt;
    }
};