class Solution {
public:
    int i =0 , j=0;
    int ans =0,cnt =0;
     
    int characterReplacement(string s, int k) {
     unordered_map<char , int>mp;
        while(j < s.length()){
          mp[s[j]]++;
          cnt = max(cnt , mp[s[j]]);

            while((j-i+1)-cnt > k){
                mp[s[i]]--;
                i++;
               }
             ans = max(ans , j-i+1);
             j++;
           }
            return ans;
    }
};