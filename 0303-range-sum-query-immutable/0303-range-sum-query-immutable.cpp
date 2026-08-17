class NumArray {
public:
    vector<int>preFix;
    vector<int> nums;
    NumArray(vector<int>& nums) {
        nums = nums;
            int num =0;
        for(int i=0;i<nums.size();i++){
            num += nums[i];
             preFix.push_back(num);
        }
    }
    
    int sumRange(int left, int right) {
        if(left == 0)return preFix[right];
      return preFix[right]-preFix[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */