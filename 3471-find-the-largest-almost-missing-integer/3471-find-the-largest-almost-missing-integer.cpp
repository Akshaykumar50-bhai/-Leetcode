class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i=0;i<=nums.size()-k;i++){
            unordered_set<int>seen;
            for(int j=i;j<i+k;j++){
                 seen.insert(nums[j]);
            }
            for(auto it : seen) mp[it]++;
        }
        int res = -1;
        for(auto i : mp){
            if(i.second == 1) res = max(i.first,res);
            
        }
         
        return res;
    }
};