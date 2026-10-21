class Solution {
public:
    string reorganizeString(string s) {
        map<char,int>mp;
        int n = s.length();
        int m = 0;
        for(char c : s){
            mp[c]++;
            m = max(m , mp[c]);
        }
        if(s.length()%2 == 0 && m > s.length()/2) return "";
        else if(s.length()%2 != 0  && m > ((s.length()/2)+1) ) return "";
        int j = 0;
        vector<pair<char,int>> arr(mp.begin(),mp.end());
        sort(arr.begin(),arr.end(),[](const auto& a , const auto& b){return a.second > b.second;});
        for(auto i : arr){
        int temp = i.second;
        while(temp--){
            s[j] = i.first;
            j+=2;
            if(j >= n) j = 1;
        }
        }
        return s;
    }
};