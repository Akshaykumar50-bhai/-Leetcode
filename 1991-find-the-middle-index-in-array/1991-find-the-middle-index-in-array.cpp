class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        
        for(int i=0;i<nums.size();i++){
            int left = 0;
            int right= 0;
            for(int k=0;k<i;k++){
                left += nums[k];
            }
            for(int j=i+1;j<nums.size();j++){
                right += nums[j];
            }
            if(right == left) return i;
        }
        return -1;
    }
};