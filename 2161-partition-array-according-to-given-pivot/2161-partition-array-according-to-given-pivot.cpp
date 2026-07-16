class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
         vector<int>a;
         vector<int>b;
         int cnt=1;
         for(int i=0;i<nums.size();i++){
            if(pivot > nums[i]) a.push_back(nums[i]);
            else if(pivot < nums[i]) b.push_back(nums[i]);
            else cnt++;
         }
         for(int i=1;i<cnt;i++){
            a.push_back(pivot);
         }
         for(int i=0;i<b.size();i++){
            a.push_back(b[i]);
         }
         return a;
    }
};