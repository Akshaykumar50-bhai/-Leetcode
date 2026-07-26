class Solution {
    public int maxDistinct(String s) {
        int[] arr = new int[26];
        Arrays.fill(arr,0);
        int cnt = 0;
        for(int i=0;i<s.length();i++){
            int n =s.charAt(i) - 97;
            if(arr[n] == 0){
                arr[n] = 1;
                cnt++;
            }
        }
        return cnt;
    }
}