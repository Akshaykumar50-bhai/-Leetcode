class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int>q1;
        queue<int>q2;
        
        for(int i=0;i<senate.size();i++){
            if(senate[i]=='R') q1.push(i);
            else q2.push(i);
        }
        while(!q1.empty() && !q2.empty()){
            if(q1.front() < q2.front()){
             q2.pop();
             int idx = q1.front();
             q1.pop();
             q1.push(idx+senate.size());
            }else{
             q1.pop();
             int idx = q2.front();
             q2.pop();
             q2.push(idx+senate.size());
            }
        }

        if(q1.size() == 0) return "Dire";
        return "Radiant";
    }
};