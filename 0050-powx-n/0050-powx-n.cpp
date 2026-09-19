class Solution {
public:
double val = 1; 
    double pos(double x  , long long n ){
        if(n == 0) return 1.0;
        
        if(n < 0){
            return 1/pos(x ,-n);
        }
         double half = pow(x,n/2);
         if(n%2 == 0) return half *half;
         else return half*half*x;

         return 0;
        
    }
    double myPow(double x, int n) {
     return pos(x , (long long)n);
    }
};