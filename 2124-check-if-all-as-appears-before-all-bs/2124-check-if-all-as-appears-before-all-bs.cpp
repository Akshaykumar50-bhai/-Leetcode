class Solution {
public:
    bool checkString(string s) {
        int b = 0,a=0;
        for(int i=0;i<s.length();i++){
            if(s[i] == 'b' && b == 0){
                b++;
            }
            if(b == 1 && s[i] == 'a') return false; 
        }
        return true;
    }
};