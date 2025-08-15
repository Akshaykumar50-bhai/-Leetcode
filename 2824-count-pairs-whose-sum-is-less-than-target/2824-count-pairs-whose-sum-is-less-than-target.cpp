class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int i= 0;
        int j = nums.size()-1;
        int res =0;
        while(i<j){
            int sum = nums[i]+nums[j];
            if(sum >= target) j--;
            else if(sum < target){
                res += j-i;
                i++;
            }
        }
        return res;
    }
};