class Solution {
public:
    int getSmall(int i , vector<int>&nums){
        int n = 1e9;
        for(int j=i;j<nums.size();j++){
         if(n > nums[j]) n = nums[j];
        }
        return n;
    }
    int firstStableIndex(vector<int>& nums, int k) {
        int larg = nums[0];
        int small = getSmall(1,nums);
        
        for(int i=0;i<nums.size();i++){
         if(larg-small <= k){
            return i;
         }else{
            if(nums[i] > larg) {
                larg=nums[i];
               }else if(nums[i] == small) small = getSmall(i+1,nums);
         }
        }
        return -1;
    }
};