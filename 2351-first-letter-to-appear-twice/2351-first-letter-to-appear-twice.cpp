class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int>res;
        
        for(char i : s){
            res[i] += 1;
            if(res[i] > 1) return i;
        }
        return ' ';
    }
};