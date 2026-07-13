class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0,j=0;
        int n = mat[0].size()-1;
    
        for(int i=0;i<mat[0].size();i++){
             
            if(i == (n-i)) sum += mat[i][n-i];
            else{
            sum += mat[i][i] ;
            sum += mat[i][n-i];
            }
                   
        }
        return sum;
    }
};