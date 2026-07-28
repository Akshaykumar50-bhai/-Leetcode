class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        double avg = 0.0;
        int i =0,j=k-1;
        for(int l=0;l<k;l++){
                sum += nums[l];
            }
            avg = sum/k;
            i++,j++;
        while(j <=(nums.size()-1)){
            sum -= nums[i-1];
            sum += nums[j];
            avg = max(avg,(sum/k));
            i++,j++;
        }
        return avg;
    }
};