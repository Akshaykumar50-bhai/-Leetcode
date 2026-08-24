class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int j=0,cnt = 0;
        int sum=0;
        for(int i=0;i<arr.size();i++){
            if(i-j < k) sum += arr[i];
            
            if(i-j+1 == k){
               
               if(sum/k >= threshold) cnt++;
               sum -= arr[j];
               j++;
            }
        }
        return cnt;
    }
};