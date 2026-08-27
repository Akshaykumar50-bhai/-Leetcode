class Solution {
public:
    string reverseOnlyLetters(string s) {
        int i = 0 ,j = s.length()-1;
        while(i<j){

            while(!((s[i] >= 'a' && s[i]<= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) && i < j){
                i++;
            }
            while(!((s[j] >= 'a' && s[j]<= 'z') || (s[j] >= 'A' && s[j] <= 'Z')) && i < j ){
                j--;
            }
            if(i>=j) return s;
            swap(s[i] , s[j]);
            i++;
            j--;
        }
        return s;
    }
};