class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> ans(nums.begin(),nums.end());
        sort(ans.begin(),ans.end());
        if(ans == nums ) return 0;
        int cnt = 0 , res = 0;
        int i=0,j=nums.size()-1;
        while((nums[i] == ans[i] || nums[j] == ans[j]) && i <= j ){
            if(nums[i] == ans[i]) i++;
            if(nums[j]  == ans[j]) j--;
        }
        
        return j-i+1;
    }
};