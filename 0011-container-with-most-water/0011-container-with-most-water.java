class Solution {
    public int maxArea(int[] height) {
         int start = 0;
        int end = height.length - 1;
        int maxi = 0;
        while(start < end){
          if(height[start] >= height[end]){
             maxi =Math.max(maxi,height[end]*(end-start));
             end--;
          }else if(height[start] < height[end]){
            maxi =Math.max(maxi,height[start]*(end-start));
            start++;
          }
        }
       return maxi;
    }
    
}