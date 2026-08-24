class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> ps(nums.size()+1);
         
        int rs = 0;
        for(int i=0;i<nums.size();i++){
                 rs += nums[i];
                ps[i+1] += rs;
        }
        for(int i=0;i<nums.size();i++){
            int lsum = ps[i];
            int rsum = ps[nums.size()] - ps[i+1];
            if(lsum == rsum) return i;
        }
         return -1;
    }
};