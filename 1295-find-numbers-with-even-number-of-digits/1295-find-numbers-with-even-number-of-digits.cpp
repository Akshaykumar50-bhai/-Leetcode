class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int c=0,count=0;
        for(int i=0;i<nums.size();i++){
            
       count=0;
        while(nums[i]){
            count++;
            nums[i] = nums[i]/10;

        }
        if(count%2==0){
          c++;
        }
    }
        
        return c;
    }
};