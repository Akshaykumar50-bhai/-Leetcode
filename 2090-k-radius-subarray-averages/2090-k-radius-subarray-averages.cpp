class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
         if(k == 0) return nums;
        vector<int>res(nums.size(),-1);
        if(nums.size()< (k+k+1)) return res;
        long long sum = 0,right = k+k;
        int n = k;
        for(int j=0;j<(k+k+1);j++){
               sum += nums[j];
            }
            res[n] = sum/(k+k+1);
            right++;
            n++;
        
        int i = 1;
        while(n<nums.size()-k){
                          
               sum += nums[right];
               sum -= nums[i-1];
                
               res[n] = sum/(k+k+1);
               right++;
               n++;
               i++;
        }
        
        return res;

    }
};