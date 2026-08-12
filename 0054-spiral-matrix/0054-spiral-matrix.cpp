class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row1=0,col1 = 0;
        int row2=matrix.size()-1,col2 = matrix[0].size()-1;
        vector<int> ans;
         while((row1<=row2)&&(col1 <= col2)){
            for(int i=col1;i<=col2;i++){
              ans.push_back(matrix[row1][i]);
            }
            row1++;
            for(int j=row1;j<=row2;j++){
                ans.push_back(matrix[j][col2]);
            }
            col2--;
            if(row1 <= row2){
            for(int i=col2;i>=col1;i--){
                ans.push_back(matrix[row2][i]);
            }
            row2--;
            }
            if(col1 <= col2){
            for(int i=row2;i>=row1;i--){
                ans.push_back(matrix[i][col1]);
            }
            col1++;
            }
         }
         return ans;
    }
};