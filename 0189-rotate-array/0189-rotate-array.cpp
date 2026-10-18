class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k > nums.size()) k = k%nums.size();
        vector<int>arr;
        int i = nums.size()-k;
        while(k--){
            arr.push_back(nums[i]);
            i++;
        }
        int j = 0;
        while(j < i){
            arr.push_back(nums[j]);
            j++;
        }
        for(int k=0;k<nums.size();k++){
            nums[k] = arr[k];
        }
    }
};