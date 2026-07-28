class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        double avg = 0;
        int i=0,j=0;
        while(j <nums.size()){
            if(j < k){
                sum += nums[j];
                    
                if(j == (k-1)) {
                    avg = sum/k;
                    i++;
                    
                } 
                      
                j++;
                 
            }
            else{
            sum -= nums[i-1];
            sum += nums[j];
            avg = max(avg,(sum/k));
            i++,j++;
            }
        }
        return avg;
    }
};