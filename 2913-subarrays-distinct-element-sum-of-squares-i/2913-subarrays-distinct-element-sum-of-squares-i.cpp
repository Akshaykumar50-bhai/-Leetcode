class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            unordered_map<int ,int>mp;
            int cnt =0;
            for(int j=i;j<nums.size();j++){
              if(mp[nums[j]] >= 1){
              ans += cnt*cnt;
                continue;
              }else{
                cnt++;
                mp[nums[j]]++;
              }
              ans += cnt*cnt;

              cout << ans << " ";
            }
            // ans += cnt*cnt;
        }
        return ans;
    }
};