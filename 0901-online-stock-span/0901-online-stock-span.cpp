class StockSpanner {
public:
 
vector<int>a;
 stack<pair<int,int>>st;

    StockSpanner() {
        
    }
    int span = 1;
    int next(int price) {
        span =1;
     if(st.empty()){ st.push({price , 1});
     return 1;}
     else{
        if(st.top().first > price){
            st.push({price , 1});
            return 1;
        }
        while(!st.empty() && st.top().first <= price ){
            span += st.top().second;
            st.pop();
        }
         st.push({price , span});
     }
     return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */