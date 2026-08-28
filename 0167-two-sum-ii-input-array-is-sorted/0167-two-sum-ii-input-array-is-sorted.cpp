class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            int num = target - nums[i];
            int j = i+1 , k = nums.size()-1;
            while(j <= k){
                int mid = (j+k)/2;
                if(nums[mid] == num)  return  {i+1,mid+1};
                else if(nums[mid] > num) k = mid-1;
                else j = mid+1;
            }
            
        }
        return ans;
    }
};