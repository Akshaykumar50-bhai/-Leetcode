class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
       for(int i= 0;i<matrix.size();i++){
        int k = matrix[i].size()-1;
        for(int j=0;j<matrix[i].size()/2;j++){
             int temp = matrix[i][j];
             matrix[i][j] = matrix[i][k];
             matrix[i][k--] = temp;
        }
       }
       int l = matrix[0].size()-1;
        int n = matrix.size()-1;
        for(int i=0;i<n;i++){
        int k =matrix.size()-1;
            for(int j=0;j<matrix[i].size();j++){
              int temp = matrix[i][j];
              matrix[i][j] = matrix[k][l];
              matrix[k][l] = temp;
              k--;
            if(k == i) j = matrix[i].size();
            }
            l--;
        }
       
        
    }
};