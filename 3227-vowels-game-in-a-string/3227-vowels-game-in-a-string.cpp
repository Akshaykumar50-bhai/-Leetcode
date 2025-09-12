class Solution {
public:
    bool doesAliceWin(string s) {
        string s1 ="aeiou";
        int cnt = 0;
        for(int i=0;i<s.length();i++){
           if(s[i]=='a' ||s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u' ){
            cnt++;
           }
        } 
        if(cnt == 0) return false;
        if((cnt & 1) == 0) return true;
        return true; 
    }
};