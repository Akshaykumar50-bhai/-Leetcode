class Solution {
public:
    int maxDistinct(string s) {
        vector<int>res(26,0);
        int cnt = 0;
        for(int i=0;i<s.length();i++){
            int n = s[i];
            n = n-97;
            if((res[n] != 1)){
                res[n] = 1;
                cnt++;
            }   
        }
       return cnt; 
    }
};