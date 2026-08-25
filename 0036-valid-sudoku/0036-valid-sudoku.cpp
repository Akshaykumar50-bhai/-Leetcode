class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<char,int>row;
        unordered_map<char,int>col;
        unordered_map<char,int>box1;
        unordered_map<char,int>box2;
        unordered_map<char,int>box3;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j] != '.') {row[board[i][j]]++; if(row[board[i][j]] > 1) return false; }
       
                if(board[j][i] != '.') {col[board[j][i]]++; if(col[board[j][i]] > 1) return false; }
                
                if(j<=2 && board[i][j] != '.'){
                    box1[board[i][j]]++;
                    if(box1[board[i][j]] > 1) return false;
                }else if(j<=5 && board[i][j] != '.'){
                    box2[board[i][j]]++;
                    if(box2[board[i][j]] > 1) return false;
                }else if(j<=8 && board[i][j] != '.'){
                    box3[board[i][j]]++;
                    if(box3[board[i][j]] > 1) return false;
                }

            }
            row.clear();
            col.clear();
            if((i+1)%3 == 0){
                box1.clear();
                box2.clear();
                box3.clear();
            }

        }
        return true;
    }
};