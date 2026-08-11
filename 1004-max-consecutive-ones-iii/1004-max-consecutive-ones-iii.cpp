class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l = 0 , r = 0;
        int zcnt = 0,ans =0;
        for(int r=0;r<nums.size();r++){
            if(nums[r] == 0 )zcnt++;
            // if(zcnt < k){
            //     if(nums[r] == 0) zcnt++;
            // }              
            if(zcnt > k){
                while(nums[l] != 0) l++;
                l++;
                zcnt--;
            }
           if(zcnt <= k)ans = max(ans,r-l+1);
        }
        if(zcnt == k)ans = max(ans,r-l+1);
        return ans;
    }
};