class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int incre = 1 , decre = 1;
        int ans = 0;
        for(int i=1;i<nums.size();i++){
            if(nums[i] > nums[i-1]){
              incre++;
              ans = max(decre , ans);
              decre = 1;
            }else if(nums[i] < nums[i-1]){
              decre++;
              ans = max(incre,ans);
              incre = 1;
            }else{
                int maxi = max(decre,incre);
                ans = max(ans , maxi);
                incre = 1;
                decre = 1;
            }
        }
        int maxi = max(decre,incre);
         ans = max(ans , maxi);
        return ans;
    }
};