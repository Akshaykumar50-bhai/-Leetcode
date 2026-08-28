class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi = 0;
        vector<bool> res(candies.size());
        for(int i=0;i<candies.size();i++){
            maxi = max(maxi , candies[i]);
              candies[i] += extraCandies;
              }
        for(int i=0;i<candies.size();i++){
            if(candies[i] >= maxi){ res[i] = true; 
            }else res[i] = false;

        }
        return res;
    }
};