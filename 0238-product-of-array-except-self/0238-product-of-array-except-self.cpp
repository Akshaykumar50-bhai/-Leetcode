class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
         
        int prod = 1,zcnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] != 0) prod *= nums[i];
            else zcnt++;
        }
         
        for(int i=0;i<nums.size();i++){
            if(zcnt == 0) nums[i] = prod/nums[i];
            if(zcnt == 1){
                if(nums[i] == 0) nums[i] = prod;
                else nums[i] = 0;
            }
            if(zcnt>1){
                 nums[i] = 0;
            }
        }
        return nums;
    }
};