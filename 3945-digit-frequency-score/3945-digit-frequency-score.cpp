class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int ,int>mp;
        int t = n;
        while(t>0){
            int rem = t%10;
            mp[rem]++;
            t = t/10;
        }
        int sum = 0;
        for(auto i : mp){
            sum += i.first*i.second;
        }
        return sum;
    }
};