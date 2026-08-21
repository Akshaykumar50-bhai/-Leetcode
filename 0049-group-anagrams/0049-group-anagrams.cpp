class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
 
        vector<vector<string>>res(strs.size());
        unordered_map<string,int>mp;
        int j =0;
        for(int i=0;i<strs.size();i++){
            string str = strs[i];
            sort(str.begin(),str.end());
            if(mp.contains(str)){
                res[mp[str]].push_back(strs[i]);
            }else{
               mp[str] = j;
               res[j].push_back(strs[i]);
               j++;
            }
        }
       while(!res.empty() && res.back().empty()){
        res.pop_back();
       }
        //    for(int i=0;i<res.size();i++){
        //     for(int k=0;k<res[i].size();k++){
        //         cout<< res[i][j];
        //     }
        //    }
        return res;
    }
};