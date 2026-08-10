class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
         
        set<int> s(nums.begin(),nums.end());
        
        int cnt=1,ans=0;
       
        for(int i : s){
            if(s.find(i+1) != s.end()) cnt++;
            else{
                ans = max(ans,cnt);
                cnt = 1;
            }
        }
        ans = max(cnt,ans);
        return ans;
    }
};