class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;
        vector<int> greater(nums2.size());
         int m = -1;
        for(int i=nums2.size()-1;i>=0;i--){
            mp[nums2[i]] = i;
             m = max(m , nums2[i]);
            greater[i] = m;
            
        }
        for(int i=0;i<nums1.size();i++){
            int idx = mp[nums1[i]];
            if(idx == nums2.size()-1) nums1[i] = -1;
            else if(nums2[idx] < nums2[idx+1]) nums1[i] = nums2[idx+1];
            else{
                int flag = 0;
                 for(int j = idx+1;j<nums2.size();j++){
                    if(nums2[j] >nums2[idx]){
                        nums1[i] = nums2[j];
                        flag = 1;
                        break;
                    }
                 }
                 if(flag == 0) nums1[i] = -1;
            }
         }
         return nums1;
    }
};