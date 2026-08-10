bool isVowel(char s){
   if(s  == 'a' || s == 'e' ||s  == 'i'||s  == 'o'||s  == 'u'||s  == 'A' || s  == 'E' ||s  == 'I'||s  == 'O'||s  == 'U') return true;
   return false;
}
class Solution {
public:
    string reverseVowels(string s) {
        int i= 0;
        int j = size(s)-1;
        int cnt2=0 ,cnt1=0;
        while(i<j){
         cnt1 =0;
          cnt2 =0;
           if(isVowel(s[i])== true) cnt1 = 1;
           else  i++;

           if( isVowel(s[j]) == true) cnt2 = 1;
           else  j--;

           if(cnt2==1 &&cnt1 == 1){
            char temp = s[i];
            s[i++] = s[j];
            s[j--] = temp;
           } 
        }
       
        
        return s;
    }
};