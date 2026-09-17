class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int n = nums1.size();
        unordered_map<int,int>mp1,mp2;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
            mp1[nums4[j]+nums3[i]]++;
            mp2[nums1[i]+nums2[j]]++;
            }
        }
        int ans = 0;
        for(auto i : mp2){
          int temp = (i.first == 0) ? i.first : -(i.first);
          cout << temp << " ";
          ans += (mp1[temp] * i.second);
        }
    
        return ans;

    }
};