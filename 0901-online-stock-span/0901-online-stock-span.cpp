class StockSpanner {
public:
 
vector<int>a;
int i =0;
int span = 1;
    StockSpanner() {
        
    }
    
    int next(int price) {
        span = 1;
        if(a.size() == 0) {a.push_back(price);
        return span;}
        else{
            int it = i;
            while(price >= a[it]){span++;
            it--;
            if(it < 0) break;}
            a.push_back(price);
            i++;
        }
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */