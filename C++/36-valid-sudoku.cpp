class Solution {
public:
    // tc is O(9^2) as I have to iterate through the whole sudoku board once. the space complexity is O(9^2) as I hold 3 hash sets of size 9x9
    bool isValidSudoku(vector<vector<char>>& board) {
        int rows[9][9] = {0};
        int cols[9][9] = {0};
        int squares[9][9] = {0};

        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(board[i][j] != '.'){
                    int num = board[i][j] - '1'; // get the int val of the num at this place in the board;
                    int k = i/3*3+j/3; // find what quare tile belongs to, 0-8
                    if(rows[i][num] || cols[j][num] || squares[k][num]) return false;
                    rows[i][num] = 1; 
                    cols[j][num] = 1;
                    squares[k][num] = 1;
                }
            }
        }
        return true;
    }
};
