class Solution {
public:
    int maxPower(string s) {
        int ch = s[0];
        int ans = 1,cnt=1;
        for(int i=1;i<s.length();i++){
            if(s[i] == ch) cnt++;
            else{
                ans = max(ans,cnt);
                cnt = 1;
                ch = s[i];
            }
        }
        ans = max(ans,cnt);
        return ans;
    }
};