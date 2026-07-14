class Solution {
public:
    string reverseWords(string s) {
        string str="";
        string res = "";
        for(int i=0;i<s.size();i++){
         if(s[i] != ' ') str += s[i];
        //  if( i == s.size()-1)res += ' ';
          if(s[i] == ' ' || i == s.size()-1){
            reverse(str.begin(),str.end());
            res.append(str);
            if(i != s.size()-1)res += ' ';
            str = "";
          }

        }
        return res;
    }
};