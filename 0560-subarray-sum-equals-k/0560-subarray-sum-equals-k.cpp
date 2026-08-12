class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt=0,j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == k)cnt++;
            int val = nums[i];
            j = i+1;
            while(j < nums.size()){
                 val += nums[j++];
                 
                if(val == k) cnt++;

            }
            
        }
        return cnt;
    }
};