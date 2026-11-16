class Solution {
public:
    bool isValid(vector<vector<char>>& board, int row, int col, char ele){
        for(int i=0;i<9;i++){
            int dr = i/3+(row/3)*3;
            int dc = i%3 + (col/3)*3;
            if(board[i][col]==ele)return false;
            if(board[row][i]==ele)return false;
            if(board[dr][dc]==ele)return false;
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    char ch = board[i][j];
                    board[i][j] = '.';
                    if(!isValid(board, i, j, ch)){
                        return false;
                    }
                    board[i][j] = ch;
                }
            }
        }
        return true;
    }
};
