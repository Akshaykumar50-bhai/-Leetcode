class Solution {
    public int minElement(int[] nums) {
        int minElement = 10001;
        int sum = 0,digit=0;
        for(int i=0;i<nums.length;i++){
            int temp = nums[i];
            while(temp > 0){
                 digit = temp%10;
                 sum += digit;
                temp = temp/10;
            }
            minElement =Math.min(minElement , sum);
            sum = 0;
        }
        return minElement;
    }
}