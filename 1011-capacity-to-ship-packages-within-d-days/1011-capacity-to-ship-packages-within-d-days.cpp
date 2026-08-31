class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int right = accumulate(weights.begin(),weights.end() , 0);
        int left = *max_element(weights.begin(),weights.end());
        long long sum = 0;
        int day = 0;
        while(left < right){
            int mid = (left+right)/2;
            sum = 0;
            day = 0;
            for(int i : weights){
               if(sum+i > mid){
                day++;
                sum = i;
                // if(sum > mid){
                //     day += ceil(1.0*sum/mid);
                //     sum = 0;
                // }
               }else {

                sum +=i;
                }
               
            }
            day++;
            cout << "{"<< day << " " <<mid << "} "; 
             
            if(day <= days){
                right = mid;
            }else left = mid+1;
        }
        return left;
    }
};