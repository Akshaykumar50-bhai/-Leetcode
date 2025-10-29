class Solution {
public:
    int smallestNumber(int n) {
        int x = 0;
        int i=0;
        while(x<n){
          x += pow(2,i);
          i++;
        }
        return x;
    }
};