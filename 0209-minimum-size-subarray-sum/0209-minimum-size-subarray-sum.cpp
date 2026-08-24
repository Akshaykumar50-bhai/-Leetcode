class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
    int j=0,sum = 0 , res = 1e9+1,i=0;
    while(i<=nums.size()){
      if(sum < target && i < nums.size()){
        sum += nums[i];
        i++;
      }
      if(sum >= target){
        res = min(res,i-j);
        sum -= nums[j];
        j++;
      }

      if(i == nums.size() && sum < target) break;

      
    }
    if(res == 1e9+1) return 0;
    return res;
    }
};