class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxi = nums[nums.size()-1];
        int sum = 0;
        for(int i : nums){
            sum += maxi - i;
        }
        return sum;
    }
};