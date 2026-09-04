class Solution {
public:
    int trap(vector<int>& height) {
        int maxi = 0;
        int idx = -1;
        for(int i=0;i<height.size();i++){
            if(maxi <= height[i]){
                maxi = height[i];
                idx = i;
            }
        }
        int i =0,j =height.size()-1;
        int s = height[i++];
        int ans = 0;
        while(i<idx){
            if(s < height[i]){
                s =height[i];
            }else if(s > height[i]){
                ans += s-height[i];
            }
            i++;
        }
        s = height[j--];
        while(idx < j){
            if(s < height[j]){
                s =height[j];
            }else if(s > height[j]){
                ans += s-height[j];
            }
            j--;
        }

        cout<< maxi;
        return ans;
    }
};