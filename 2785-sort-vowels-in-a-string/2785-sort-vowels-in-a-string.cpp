class Solution {
public:
    bool isVowel(char ch){
      string vowels = "AEIOUaeiou";
      return vowels.find(ch) !=string :: npos?true : false;
    }
    string sortVowels(string s) {
        string s1 = "";
        for(char ch : s){
         if(isVowel(ch)) s1.push_back(ch);
        }
        sort(s1.begin(),s1.end());
        int j = 0;
        for(int i=0;i<s.length();i++){
            if(isVowel(s[i])) s[i] = s1[j++];
        }
        return s;
    }
};