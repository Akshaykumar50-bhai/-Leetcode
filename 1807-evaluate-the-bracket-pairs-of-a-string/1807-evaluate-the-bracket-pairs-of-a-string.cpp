class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
      unordered_map<string,string>mp;
      for(int i=0;i<knowledge.size();i++){
        mp[knowledge[i][0]] = knowledge[i][1];
        cout << mp[knowledge[i][0]] << " "; 
      }  
      string st = "";
      int flag = 0;
      string s1 = "";
      for(int i=0;i<s.length();i++){
        if(s[i] == '(') flag =1;
        else if(s[i] == ')') flag = 2;

        if(flag == 1){if(s[i]!='(')s1+=s[i];}
        else if(flag == 2){
            if(mp[s1] == "") st += '?';
            else st += mp[s1];
            // cout << mp[s1] << " ";
            s1 = "";
            flag = 0;
        }else{
            st += s[i];
        }

      }
      return st;
    }
};