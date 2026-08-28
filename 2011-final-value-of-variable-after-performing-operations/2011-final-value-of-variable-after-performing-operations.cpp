class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        unordered_map<string,int> mp;
        mp["--X"] = -1;
        mp["X--"] = -1;
        mp["++X"] = 1;
        mp["X++"] = 1;
        int res = 0;
        for(string it : operations){
            res += mp[it];
        }
        return res;
    }
};