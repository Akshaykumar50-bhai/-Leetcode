class Solution {
public:
    bool isPalindrome(string s) {
       string str = "";
       for(char c : s){
       int num = c -'0';
        if(c >= 65 && c <= 90){
            str+= c+32;
        }else if(c >= 97 && c <= 122) str += c;
        else if(num >= 0 && num <= 9) str+= c;
       }

       int i = 0,j=str.length()-1;
       while(i <= j){
        if(str[i] != str[j]) return false;
        i++;
        j--;
       }
       return true;
    }
};