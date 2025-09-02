class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> res;
        int j = nums.size()-1;
        int i=0;
        while(j>i){
            res.push_back(nums[i++]+nums[j--]);
        }
        int ans = *max_element(res.begin(),res.end());
          return ans;
    }

};