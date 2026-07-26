class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum = 1,pro=1;
        int n = nums.size()-1;
        sum *=nums[n--];
        sum*= nums[n--];
        sum *= nums[n--];

        pro *= nums[0];
        pro *= nums[1];
        pro *= nums[(nums.size()-1)];
        // for(int i=(nums.size()-1);i>=0;i--){
        //     sum += nums[i];
        //     cnt++;
        //     if(cnt == 3) return sum;
        // }
        if(pro >= sum ) return pro;
        return sum;
    }
};