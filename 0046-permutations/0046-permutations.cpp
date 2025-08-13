class Solution {
public:
void permutation(vector<int>& a,vector<int>& temp,vector<vector<int>>& ans,vector<bool>& visited){
       if((temp.size() == a.size())){
         ans.push_back(temp);
          return;
       }
     for(int j = 0;j<a.size();j++){
       if(visited[j]) continue;
         visited[j] = true;
         temp.push_back(a[j]);
         
         permutation(a,temp,ans,visited);
         
          temp.pop_back();
          visited[j] = false;
     }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        vector<bool> visited(nums.size(),false);
      permutation(nums,temp,ans,visited);
      return ans;
    }
};