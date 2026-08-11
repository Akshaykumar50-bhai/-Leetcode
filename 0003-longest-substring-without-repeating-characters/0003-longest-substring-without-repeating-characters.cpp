class Solution {
public:  
    int lengthOfLongestSubstring(string s) {
        set<char>res;
        res.insert(s.begin(),s.end());
        int si = res.size();
        int r=0,l=0;
        unordered_map<char,int>ans;
        int fans = 0,cnt=0;
         
        while(r<s.length()){
             if(!(ans[s[r]] >= 1)) {
                ans[s[r]]++;
                cnt++;
             }else{
                   
                  while(s[l] != s[r]){
                    ans.erase(s[l]);
                    l++;
                    cnt--;
                  }
                  l++;
                  
                  
             }
             fans = max(cnt,fans);
             r++;
        }
       return fans;
        
    }
}; 