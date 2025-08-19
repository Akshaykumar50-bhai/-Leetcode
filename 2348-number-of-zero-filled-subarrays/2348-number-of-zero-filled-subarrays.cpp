class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long subArray = 0;
        long long cnt1 = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 0){
               cnt1++;
              }
            else{
             subArray += (cnt1*(cnt1+1))/2 ;
             cnt1 = 0;
            }
        }

        subArray += (cnt1*(cnt1+1))/2 ;

        return subArray;
    }
};