class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int i=0,res = 1e9 ,j= 0,cnt = 0;
        string str = "";
        while(j < s.length()){
            while(cnt < k && j< s.length()){
                if(s[j] == '1') cnt++;
                j++;
            }
            
            if(cnt == k){
                while(s[i] != '1') i++;
                if(res > j-i){
                    res = j-i;
                    str = s.substr(i , j-i);
                     
                }else if(res == j-i){
                    string s1 = s.substr(i,j-i);
                    if(str > s1) str = s1;
                }
                i++;
                cnt--;
            }
        }
         return str;
    }
};