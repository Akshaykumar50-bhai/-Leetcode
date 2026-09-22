class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
         queue<int>q;
         for(int i=0;i<tickets.size();i++){
            q.push(i);
         }
         int sum =0;
         while(tickets[k] != 0){
         int idx = q.front();
         q.pop();
         if(tickets[idx]!=0){
            sum += 1;
            tickets[idx]--;
            if(tickets[idx] != 0) q.push(idx);
         }
        }
        return sum;
    }
};