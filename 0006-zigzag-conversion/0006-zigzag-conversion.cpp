class Solution {
public:
    string convert(string s, int numRows) {
       vector<vector<char>>con(numRows);
       
       int j = 0,idx=0;
       while(idx < s.length()){
       int i=0;
        
       while(i < numRows){
        if(idx >= s.length()) break;
         con[i++].push_back(s[idx++]);
         cout << s[idx] << " ";
       }
       if(idx >= s.length()) break;
       i -= 2;
       while(i > 0){
        if(idx >= s.length()) break;
        con[i--].push_back(s[idx++]);
         cout << s[idx] << " ";
       }
       if(idx >= s.length()) break;
       
       }

    //    cout << "Bhai";
        string str = "";
        for(int i = 0;i< con.size();i++){
            for(int k = 0; k<con[i].size();k++){
                // cout<< con[i][k] << " ";
             if(con[i][k] != ' '){str += con[i][k]; cout<< con[i][k] << " ";}
            }
        }
         
         return str;

    }
};