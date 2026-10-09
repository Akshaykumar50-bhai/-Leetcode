class Solution {
public:
    long long maximumSubarraySum(vector<int>& arr, int k) {
        long long ans =0, sum =0;
        unordered_map<int,int>mp;
        int flag = 0;
        for(int i=0;i<k;i++){
           if(mp[arr[i]] >= 1){
            flag = 1;
            if(mp[arr[i]] == 1) sum -= arr[i];
             mp[arr[i]]++;
           }else{
            mp[arr[i]]++;
            sum += arr[i];
           }
        }
        if(flag == 1){ ans = 0; flag = 0;}
        else ans = sum;
         int j = 0;


        for(int i=k;i<arr.size();i++){
            if(mp[arr[j]] == 1){
             mp[arr[j]]--;
             sum -= arr[j];
             mp.erase(arr[j]);
            }else if(mp[arr[j]] == 2){
                mp[arr[j]]--;
                sum += arr[j];
            }else{
                mp[arr[j]]--;
            }
            

            if(mp[arr[i]] == 1){
                flag = 1;
                mp[arr[i]]++;
                sum -= arr[i];
            }else if(mp[arr[i]] >= 1){
                flag = 1;
                mp[arr[i]]++;
            }else{
                mp[arr[i]]++;
                sum += arr[i];
            }
            
            if(mp.size() == k){
            cout << arr[i] <<" ";
             ans = max(sum,ans);
            }
            flag = 0;
            j++;
        }
        return ans;
    }
};