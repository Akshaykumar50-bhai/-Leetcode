class Solution {
public:
    bool isAnagram(string s, string t) {
      unordered_map<char,int> res;
      if(s.length() != t.length()) return false;
        for(char it : s ){
            res[it] += 1;
        }
        for(char it: t){
            
            res[it] -=1;
        }
        for(const auto& i : res){
              if(i.second != 0) return false;
        }
        
        return true;
    }
};