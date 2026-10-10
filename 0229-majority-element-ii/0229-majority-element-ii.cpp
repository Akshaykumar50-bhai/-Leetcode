class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        int prev = nums[0];
        int cnt = 1;
        for(int i=1;i<nums.size();i++){
         if(prev == nums[i]){
            cnt++;
         }else{
            if(cnt > nums.size()/3){
            ans.push_back(prev);
            }
            prev = nums[i];
            cnt = 1;
         }
        }

        if(cnt > nums.size()/3){
            ans.push_back(prev);
        }
        return ans;
    }
};