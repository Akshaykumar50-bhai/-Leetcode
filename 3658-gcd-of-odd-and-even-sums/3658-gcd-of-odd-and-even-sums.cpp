class Solution {
public:
    int GCD(int odd ,int even){
        while(odd !=0 && even !=0){
        if(odd > even){
        odd = odd - even;
        }else{
            even = even - odd;
        }
        }
        return even ? even : odd;
    }
    int gcdOfOddEvenSums(int n) {
        int oddsum = 0;
        int evnsum = 0;
        int i = 1;
        while(i<=n*2){
            if(i%2 == 0) evnsum += i;
            else oddsum +=i;
            i++;
        }
        return GCD(oddsum , evnsum);
    }
};