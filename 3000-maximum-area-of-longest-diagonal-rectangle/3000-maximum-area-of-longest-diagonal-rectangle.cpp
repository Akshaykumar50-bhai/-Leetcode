class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        double maxdiagonal = 0;
        int maxarea = 0;
        for(int i=0;i<dimensions.size();i++){
             
            double dia = sqrt((dimensions[i][0]*dimensions[i][0])+(dimensions[i][1]*dimensions[i][1]));
            if(dia > maxdiagonal)
            maxarea = dimensions[i][0]*dimensions[i][1];
            else if(dia == maxdiagonal)
            maxarea = max(maxarea , dimensions[i][0]*dimensions[i][1]);
             maxdiagonal = max(dia,maxdiagonal);
        }
        return maxarea;
    }
};