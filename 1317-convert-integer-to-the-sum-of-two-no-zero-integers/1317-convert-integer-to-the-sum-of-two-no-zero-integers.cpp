class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
         vector<int> arr;
        
         for(int i=1;i<=500;i++){
           string  s1 = to_string(n-i);
            
            string  s2 = to_string(i);
            if(s1.find('0') == string :: npos && s2.find('0') == string :: npos) {
            arr.push_back(n-i);
            arr.push_back(i);
            return arr;
            }
         }
         return arr;
    }
};