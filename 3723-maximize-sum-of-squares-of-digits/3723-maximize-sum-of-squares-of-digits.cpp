class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string n = "";
        int temp = num;
        while(temp--){
            n += '9';
        }
        int total = num*9;
        if(total >= sum){
            total -= sum;
            for(int i=n.length()-1;i>=0;i--){
                if(total >= 9){
                    n[i] = '0';
                    total -= 9;
                }else{
                    char c =  '9' - total;
                    n[i] = c;
                    cout << c << " " << n[i] << " ";
                     break;
                }
            }
        }else return "";
        return n;
    }
};