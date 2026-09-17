class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
       int n = arr.size();
    
    vector<pair<int,int>>nse(n , {n,-1});

    stack<int>st;
    for(int i=0;i<n;i++){
        
        if(st.empty()) st.push(i);
        else if( arr[st.top()] < arr[i] ) st.push(i);
        else{
            while(!st.empty() && arr[st.top()] > arr[i]){
              nse[st.top()].first = i;
              st.pop(); 
            }
            st.push(i);    
           }
    }
    // while(!st.empty()) {
    //     nse[st.top()].first = -1;
    //     st.pop();
    // }
    for(int i=0;i<n;i++){
        cout << nse[i].first << " ";
    }
    cout << " || ";

    for(int i=n-1;i>=0;i--){
        if(st.empty() ||arr[st.top()] < arr[i] )st.push(i);
        else{
            while(!st.empty() && arr[st.top()] > arr[i]){
                nse[st.top()].second = i;
                st.pop();
            }
            st.push(i);
        }
        // while(!st.empty()){
        //     nse[st.top()].second = -1;
        //     st.pop();
        // }
    }

    for(int i=0;i<n;i++){
        cout << nse[i].second << " ";
    }
    int ans = 0;
    for(int i=0;i<n;i++){
    if(nse[i].second == -1){
        ans = max(ans , nse[i].first*arr[i]);
    }else{
        ans = max(ans , (nse[i].first - nse[i].second-1)*arr[i]);
    }
    
    }


       return ans;
    }
};