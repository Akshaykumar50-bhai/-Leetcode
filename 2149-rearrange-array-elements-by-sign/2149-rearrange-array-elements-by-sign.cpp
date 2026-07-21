class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>res;
        int cnt = 0;
        int i=0;
        int j=0;
        int n = nums.size();
         while(i<n && j<n){
           while(nums[i]<0) i++;
           while(nums[j]>0) j++;
 
        if(cnt == 0 && nums[i] > 0){
            res.push_back(nums[i]);
            cnt=1;
        } 
        if(cnt == 1 && nums[j] < 0){
            res.push_back(nums[j]);
            cnt =0;
        }

        i++;
        j++;
        }
        return  res;
    }
};