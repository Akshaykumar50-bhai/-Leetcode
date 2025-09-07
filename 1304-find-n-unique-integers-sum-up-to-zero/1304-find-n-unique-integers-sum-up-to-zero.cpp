class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> res;
        if(n%2 != 0){
         res.push_back(0);
         n--;
        }
        int i = 1;
        int j = -1;
        while(n!= 0){
            res.push_back(i++);
            res.push_back(j--);
            n -= 2;
        }
        return res;
    }
};