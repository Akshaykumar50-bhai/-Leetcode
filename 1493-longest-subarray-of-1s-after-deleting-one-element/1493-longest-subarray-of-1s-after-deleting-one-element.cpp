class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int zerocnt = 0;
        int i =0 ; 
        int n = nums.size();
        int j;
        int cnt =0,maxcnt = 0;
        while(i<n){
            if(nums[i] == 0 && zerocnt == 0){
             j = i;
             zerocnt++;
             i++;
            }
            else if(nums[i] == 1){
                cnt++;
                i++;
            }else if(nums[i] == 0 && zerocnt > 0){
                maxcnt = max(maxcnt,cnt);
                cnt = 0;
                zerocnt=0;
                i = j+1;
            }
        }
        if(n == cnt ) return cnt-1;
        return maxcnt > cnt ? maxcnt : cnt;
    }
};