class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int ,int> ps;
        ps[0] = 1;
        int cnt =0 , PS = 0;
        for(int i=0;i<nums.size();i++){
           PS += nums[i];
           int c = PS - k;
           if(ps[c] >= 1) cnt += ps[c];

           ps[PS]++; 
        }
        return cnt;
    }
};