class Solution {
public:
    int canEat(vector<int>& piles, int h,int mid){
        long long sum = 0;
        for(int j=0;j<piles.size();j++){    
                sum += ceil(1.0*piles[j]/mid);
                // cout << sum << " ";
            }
             return sum;
    }
    // int getmax(vector<int>& piles){
    //     int sum =0;
    //     for(int i : piles){
    //      sum = max(i,sum);
    //     }
    //     return sum;
        
    // }
    int minEatingSpeed(vector<int>& piles, int h) {
           
        // auto mi = min_element(piles.begin(),piles.end());
        int ma = *max_element(piles.begin(),piles.end());
        // int mi_i = distance(piles.begin(),mi);
        // int ma_i =  getmax(piles);
        int ans = 0;
        // if(piles.size() == 1) mi_i = piles[0];
        // for(int i=piles[mi_i];i<=piles[ma_i];i++){
        //     long long sum = 0;
             
        //     for(int j=0;j<piles.size();j++){
                 
        //         sum += ceil(1.0*piles[j]/i);
        //         cout << sum << " ";
        //     }
        //     if(sum <= h) return i;
        // }
        int i = 1;
        int j = ma;

        while(i<j){
            int mid= (i+j)/2;
            if(canEat(piles,h,mid) <= h){
                j = mid;
            }else i = mid+1;
        }
        

        return i;
    }
};