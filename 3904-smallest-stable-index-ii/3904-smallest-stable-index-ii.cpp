// class Solution {
// public:
//     int firstStableIndex(vector<int>& nums, int k) {
        
//     }
// };
class Solution {
public:
    int getSmall(int i , vector<int>&nums){
        int n = 1e9;
        for(int j=i;j<nums.size();j++){
         if(n > nums[j]) n = nums[j];
        }
        return n;
    }
    int firstStableIndex(vector<int>& nums, int k) {
        int larg = nums[0];
        vector<int> mini(nums.size());
        mini[nums.size()-1] = nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--){
          mini[i] = min(mini[i+1] , nums[i]);
        //   cout << mini[i] <<" ";
        }
         
        for(int i=0;i<nums.size();i++){
           larg = max(larg , nums[i]);
         if(larg-mini[i] <= k){
            // cout<< small << " ";
            return i;
         } 
        }
        return -1;
    }
};