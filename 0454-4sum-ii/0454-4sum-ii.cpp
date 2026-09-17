class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int n = nums1.size();
        map<int,int>mp;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
            mp[nums4[j]+nums3[i]]++;
            }
        }
        int ans = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){                     
                    int val = nums1[i]+nums2[j];
                    int temp = (val == 0) ? val :-val;
                    if(mp[temp] >= 1) ans += mp[temp];
                    
                }
            }
    
        return ans;

    }
};