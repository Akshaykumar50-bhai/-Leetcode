class Solution {
public:
    int strStr(string haystack, string needle) {
        int j = 0;
        for(int i=0;i<haystack.length();i++){
            int k = 0;
            for(int j= i;j<haystack.length();j++){
                 if(needle[k] == haystack[j] ){
                    if(k == needle.size()-1) return i;
                    else k++;
                 }else break;
            }
        }
         return -1;   
    }
};