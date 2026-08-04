class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>t;
        unordered_map<char,int>t1;
        for(char i: s1){
            if(t[i] >= 1) t[i]++;
            else t[i] = 1;
        }
        int cnt=0;
        if((s2.length()<s1.length())) return false;
        for(int i=0;i<=s2.length()-s1.length();i++){
            cnt = 0;
             for(int j=i;j<s1.length()+i;j++){
                if(t[s2[j]] >= 1 && t1[s2[j]] != t[s2[j]]) {
                    cnt++;
                    t1[s2[j]]++;
                    }
                else break;
                if(cnt == s1.length()) return true;
             }
             t1.clear();
        }
        return false;
        
    }
};