class Solution {
public:
    string reverseWords(string s) {
        string s1 = "";
        vector<string>st;
        for(int i=0;i<s.length();i++){
            if(s[i] == ' '){
                if(s1 != "")
                st.push_back(s1);
                s1 = "";
            }else{
                s1 += s[i];
            }
        }
        if(s1 != "")
        st.push_back(s1);
        s1 = "";
        for(int i=st.size()-1;i>=0;i--){
        if(st[i] != " ")
        s1 += st[i];
        if(i != 0)
           s1 += " ";
        }
         
        return s1;
    }
};