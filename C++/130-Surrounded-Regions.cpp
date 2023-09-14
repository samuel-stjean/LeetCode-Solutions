class Solution {
public:
    // The tc is O((n*m) * log(n*m)) as the first n * m nested for loop calls a recursive function that may go through the at most part of the matrix. 
    void notSurrounded(int r, int c, vector<vector<char>>& board){
        
        if(r < 0 || c < 0 || r >= board.size() || c >= board[0].size() || board[r][c] != 'O') return;
        board[r][c] = 'A';
        notSurrounded(r+1,c,board);
        notSurrounded(r-1,c,board);
        notSurrounded(r,c+1,board);
        notSurrounded(r,c-1,board);

    }
    void solve(vector<vector<char>>& board) {
        int row = board.size();
        int col = board[0].size();
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(j == 0 || j == col-1 || i == 0 || i == row-1){
                    if(board[i][j] == 'O') notSurrounded(i,j,board);
                }
            }
        }
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
               if(board[i][j] == 'O') board[i][j] = 'X';
            }
        }
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
               if(board[i][j] == 'A') board[i][j] = 'O';
            }
        }
    }
};
