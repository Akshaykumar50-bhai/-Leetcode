class Solution {
public:
    void permutation(vector<int>& a,vector<int>& temp,set<vector<int>>& ans,vector<bool>&visited){
       if((temp.size() == a.size())){
         ans.insert(temp);
          return;
       }
    for(int j = 0;j<a.size();j++){
     if(visited[j]) continue;
       temp.push_back(a[j]);
       visited[j] = true;
       permutation(a,temp,ans,visited);
        temp.pop_back();
        visited[j] = false;
    }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> ans;
        vector<vector<int>> res;
        vector<int> temp;
        vector<bool> visited(nums.size(),false);
      permutation(nums,temp,ans,visited);
      for(const auto& it : ans){
          res.push_back(it);
      }
      return res;
    }
};