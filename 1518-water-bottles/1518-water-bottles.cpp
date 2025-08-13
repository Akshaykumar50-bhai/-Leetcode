class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int sum = numBottles;
        int temp = numBottles;
        while(temp>=numExchange){
            sum += temp/numExchange;
            temp = temp/numExchange + temp%numExchange;
        }
        return sum;
    }
};