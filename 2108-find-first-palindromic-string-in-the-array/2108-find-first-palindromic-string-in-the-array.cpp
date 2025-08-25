class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string s = "";
        for(int i= 0; i<words.size();i++){
            for(int j = words[i].size()-1;j>=0;j--){
             s += words[i][j];
            }
            if(s == words[i]) return s;
            s = "";
        }
        return s;
    }
};