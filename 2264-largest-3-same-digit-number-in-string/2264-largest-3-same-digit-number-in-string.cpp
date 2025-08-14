class Solution {
public:
    string largestGoodInteger(string num) {
        int count = 1;
        string s = "";
        string z = "";
        char ch = num[0];
        for(int i=1;i<num.length();i++){
             if(ch == num[i]){
                count++;
             }else{
                ch = num[i];
                count = 1;
             }

            if(count == 3){
                if(ch == '0'){
                z = "";
                z += ch;
                z += ch;
                z += ch;
                }else if(ch > s[0]){
                s = "";
                s += ch;
                s += ch;
                s += ch;
                }else if(s == ""){
                s += ch;
                s += ch;
                s += ch;
                }
            } 
        }
         if(s == "" && z == "") return s;
         else if(s == "" ) return z;
         return s; 
    }
};