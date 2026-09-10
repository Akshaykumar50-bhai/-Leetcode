class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        vector<int>ans(temp.size());
        stack<int>st;
        for(int i=0;i<temp.size();i++){
            if(st.empty()) st.push(i);
            else{
                
                while(temp[st.top()] < temp[i] ){
                    ans[st.top()] = i-st.top();
                    st.pop();
                    if(st.empty()) break;
                }
                st.push(i);
            }
        }
        return ans;
    }
};