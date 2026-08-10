class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int>s1;
        unordered_map<char,int>s2;
        vector<int> res;
        for(char c : p){
            s1[c]++; 
        }
        int l=0,r=0;
        for(int i=0;i<p.size();i++){
            s2[s[i]]++;
            r++;
        }
        if(s1 == s2) res.push_back(l);
        while(r<s.length()){      
                s2[s[r]]++;
                r++;
                s2[s[l]]--;
                if(s2[s[l]] == 0)
                 s2.erase(s[l]);
                l++;
            if(s1 == s2) res.push_back(l);
        }
         
        return res;
    }
};