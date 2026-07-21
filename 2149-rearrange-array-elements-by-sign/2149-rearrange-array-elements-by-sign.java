class Solution {
    public int[] rearrangeArray(int[] nums) {
        int i=0,j=1,k=0;
        int n = nums.length;
        int[] res = new int[n];
        while(k<n){
            if(nums[k] >= 0){
                res[i] = nums[k];
                i +=2;
            }
            else{
                res[j]= nums[k];
                j += 2;
            }
            k++;
        }

        return res;
 
    }
}