class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>mp;
         mp[0] = -1;
        int sum = 0, len =0,res = 0;
        for(int i=0;i<nums.size();i++){
                if(nums[i] == 0){
                     sum -= 1;  
                     }
                else sum += 1;
               if(mp.contains(sum)){
                len = i - mp[sum];
                res = max(len,res);
               }else{
                mp[sum] = i;
               }
        }
       return res;
    }
};