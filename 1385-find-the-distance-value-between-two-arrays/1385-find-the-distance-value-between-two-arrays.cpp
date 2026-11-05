class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int ans = 0;
        for(int i : arr1){
            int flag = 0;
            for(int j : arr2){
               if(abs(i-j) <= d){
                flag = 1;
                break;
               }
            }
             
            if(flag == 0) ans++;
        }
        return ans;
    }
};