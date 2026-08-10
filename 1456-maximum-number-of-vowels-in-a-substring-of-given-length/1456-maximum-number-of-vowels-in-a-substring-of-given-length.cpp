class Solution {
public:
    bool isVowel(char ch){
        if(ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u') return true;
        return false;
    }
    int maxVowels(string s, int k) {
        int cnt = 0;
        int i=0,j=0,ans =0;
         for(char c : s){
            if(j < k){
             if(isVowel(c)) cnt++;
             j++;
            }else if(j < s.length()){
               if(isVowel(c)){
                cnt++;
                j++;}
                if(isVowel(s[i])) cnt--;
                i++;
               
            }
            ans = max(ans,cnt);
         }
        return ans;
    }
};