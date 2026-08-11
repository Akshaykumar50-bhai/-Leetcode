class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res = 0;
        int cnt = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 0){
                 res = max(cnt ,res);
                 cnt = 0;
            }
            else cnt++;
        }
        res = max(cnt ,res);
        return res;
    }
};