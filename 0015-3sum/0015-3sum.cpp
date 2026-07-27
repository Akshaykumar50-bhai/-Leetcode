class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
         vector<vector<int>> res;
         
         if(nums.size() == 3){
            if((nums[0] + nums[1]+nums[2] )== 0)
               res.push_back({nums[0] , nums[1],nums[2]});
         }
        for(int i=0;i<(nums.size()-1);i++){
        int left =i+1,right=nums.size()-1;
           while(left<right){
            if((nums[i] + nums[left]+nums[right] )== 0){
              res.push_back({nums[i],nums[left],nums[right]});
            left++;
            right--;
            }else if((nums[left]+nums[right]+ nums[i]) >  0) right--;
            else left++;
           }
        }
          sort(res.begin(),res.end());
          auto j = unique(res.begin(),res.end());
          res.erase(j,res.end());
        return res;
    }
};