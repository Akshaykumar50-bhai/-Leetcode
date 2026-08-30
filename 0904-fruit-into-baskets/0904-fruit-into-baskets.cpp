class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        map<int,int> mp;
         int j =0,ans=0;
         for(int i=0;i<fruits.size();i++){
            mp[fruits[i]]++;
            
            if(mp.size() > 2){
               if(mp[fruits[j]] == 1) mp.erase(fruits[j]);
                else mp[fruits[j]]--;
                j++;
            }
            ans = max(ans,i-j+1);
         }
         return ans;
    }
};