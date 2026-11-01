class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum = 0 , mini = nums[0];
        for(int i : nums){
          sum += i - mini;
        }
        return sum;
    }
};