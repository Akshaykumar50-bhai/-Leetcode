class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
     unordered_map<int,int> mp;
    
     vector<int> res;
     for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
     }
     vector<pair<int,int>> ans(mp.begin(),mp.end());
     sort(ans.begin(),ans.end(),[](const auto&a ,const auto& b){ return a.second < b.second;});
     for(int i=ans.size()-1;i>=0;i--){
       if(k != 0){
        res.push_back(ans[i].first);
        k--;
       }else return res;
     }
      
     return res;
    }
};