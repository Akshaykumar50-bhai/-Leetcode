class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        vector<int> num = nums;
        unordered_map<int ,int> mp;
        int n = 0;
        mp[0] = -1;
        
        for(int i=0;i<nums.size();i++){
             n += nums[i];
             nums[i] = n;
             if(mp.find(n%k) != mp.end()){
                  if(i-(mp[n%k]+1)+1 >= 2) return true;
             }else{

                mp[n%k] = i;
                
             }
        }
    //    int j  =0 ;
    //     for(int i=2;i<nums.size();i++){
    //         int j = 0;
    //          while(j <= i-2){
    //             int temp =  nums[i]-nums[j];
    //             if(temp%k == 0) return true;
    //             j++;
    //          }
        
       return false;
    }
};