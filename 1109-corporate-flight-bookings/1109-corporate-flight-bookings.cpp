class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int>arr(n,0);
       
        vector<int>diff(n+1,0);
         
        for(int i=0;i<bookings.size();i++){
            int l=bookings[i][0];
            int r = bookings[i][1];
            int val = bookings[i][2];
            diff[l-1] += val;
            diff[r] -= val;
        }
         for(int i=0;i<diff.size();i++){
            cout << diff[i] << " ";
         }
          int v = 0;
        for(int i=0;i<diff.size();i++){
             if(i == 0) {diff[i] += 0;
             v += diff[i];}
             else{
                v += diff[i];
                diff[i] = v;
             }
             if(i < n) arr[i] += v;
                       
        }
        return arr;
    }
};