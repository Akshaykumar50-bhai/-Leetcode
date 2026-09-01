class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int i = 1;
        int j = *max_element(nums.begin(),nums.end());
        while(i<j){
            int mid = (i+j)/2;
            int sum = 0;
            for(int it : nums){
             int s = it%mid;
             if(s == 0)sum += it/mid;
             else sum += (it/mid)+1; 
            }
            // cout <<  "{"<<sum << " " << mid <<"}";
            if(sum <=threshold){
                j = mid;
            }else i = mid+1;
        }
        return j;
    }
};