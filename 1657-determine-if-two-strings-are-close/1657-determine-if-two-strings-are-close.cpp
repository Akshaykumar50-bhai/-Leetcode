class Solution {
public:
    bool closeStrings(string word1, string word2) {
        map<char,int>mp1;
        map<char,int>mp2;
        map<int,int>mp3;
        if(word1.size() != word2.size()) return false;
        for(int i=0;i<word1.size();i++){
            mp1[word1[i]]++;
            mp2[word2[i]]++;
        }
        for(auto i : mp1){
            mp3[i.second]++;
        }
        for(auto i : mp2){
            if(mp3[i.second] >= 1 && mp1[i.first] >= 1) mp3[i.second]--;
            else return false;
        }
        return true;
    }
};