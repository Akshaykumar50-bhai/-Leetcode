class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int chunk =0;
        stack<int>st;
         
        for(int i=0;i<arr.size();i++){
          if(st.empty()) st.push(arr[i]);
          else{
             if(st.top() < arr[i]) st.push(arr[i]);
             else {
                int maxi = st.top();
                while(!st.empty() && st.top() > arr[i]){
                    maxi = max(st.top(),maxi);
                    st.pop();
                }
                st.push(maxi);
             }
          }
        }
        // if(arr[0] < arr[arr.size()-1])  return st.size()+1;

        
         
        return st.size();
    }
};