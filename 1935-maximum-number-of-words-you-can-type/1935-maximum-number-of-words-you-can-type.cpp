class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int ans = 0;
        int cnt = 0;
        for(char i : text){
            if(i == ' '){
                if(cnt == 0) ans++;
                cnt = 0; 
            }
            
            if(brokenLetters.find(i) != string :: npos) cnt++;
        }
        if(cnt == 0) ans++;
        return ans;
    }
};