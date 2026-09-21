class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int val = tickets[k];
        int sum = 0;
        for(int i=0;i<=k;i++){
         if(tickets[i] <= val) sum += tickets[i];
         else sum += val;
        }
        val--;
        for(int i = k+1;i<tickets.size();i++){
            if(tickets[i] <= val) sum += tickets[i];
            else sum += val;
        }
        return sum;
    }
};