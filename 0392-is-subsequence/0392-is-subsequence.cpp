class Solution {
public:
    bool isSubsequence(string s, string t) {
         int i = 0;
         if(s == t) return true;
         for(char it : t){
         if(s[i] == it) i++;
         if(i >= s.size()) return true;

         }
     return false;
    }
};