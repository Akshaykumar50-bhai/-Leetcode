class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>mp;
        int singleChar = 1e9 , DoubleChar = 1e9;
        int cnt = 0;
        for(char ch : text){
          if(ch == 'b' || ch == 'a' || ch =='l' || ch == 'o' || ch == 'n'){
            if(mp[ch] == 0){ cnt++;
             }  mp[ch]++;}      }

        if(cnt != 5) return 0;
        
        for(auto it : mp){
            if(it.first == 'l' || it.first == 'o') DoubleChar = min(DoubleChar , it.second%2 == 0 ? it.second : it.second-1);
            else singleChar = min(singleChar , it.second);
           
           cout << it.first << " " << it.second  << " ";
        }
        if(singleChar <= DoubleChar/2) return singleChar;
        if(singleChar==1e9 || DoubleChar== 1e9) return 0;
        while(singleChar > DoubleChar/2) singleChar--;
        return singleChar;

    }
};