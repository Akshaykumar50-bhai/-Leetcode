class Solution {
public:
    string reverseVowels(string s) {
        int i= 0;
        int j = size(s)-1;
        int cnt2=0 ,cnt1=0;
        while(i<j){
         cnt1 =0;
          cnt2 =0;
           if(s[i] == 'a' || s[i] == 'e' ||s[i] == 'i'||s[i] == 'o'||s[i] == 'u'||s[i] == 'A' || s[i] == 'E' ||s[i] == 'I'||s[i] == 'O'||s[i] == 'U') cnt1 = 1;
           else  i++;

           if(s[j] == 'a' || s[j] == 'e' ||s[j] == 'i'||s[j] == 'o'||s[j] == 'u'||s[j] == 'A' || s[j] == 'E' ||s[j] == 'I'||s[j] == 'O'||s[j] == 'U') cnt2 = 1;
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