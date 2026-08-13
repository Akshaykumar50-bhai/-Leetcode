class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
         if(k == 0) return nums;
         else if(nums.size()<= k+k ) {
            fill(nums.begin(),nums.end(),-1);
            return nums;
            }
        vector<int>res(nums.size(),-1);
        long long sum = 0,right = k+k;
        int n = k;
        for(int j=0;j<=(k+k);j++){
               sum += nums[j];
            }
            res[n] = sum/(k+k+1);
            right++;
            n++;
        if(right < nums.size()){
        for(int i=1;i<nums.size();i++){
    
            if(right < nums.size()){
                
               sum += nums[right];
               sum -= nums[i-1];
                
               res[n] = sum/(k+k+1);
               right++;
               n++;
            
            }else{
                return res;
            }

        }
        }
        return res;

    }
};