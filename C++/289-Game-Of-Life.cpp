class Solution {
public:
// tc is O(n * m) and sc is O(n * m)
    int liveNeighbors(vector<vector<int>>& cur, int r, int c){
        int t = 0;
        int m = cur.size()-1;
        int n = cur[0].size()-1;
        if(r-1 >= 0) t += cur[r-1][c];
        if((r+1 <= m)) t += cur[r+1][c];
        if((c-1 >= 0)) t += cur[r][c-1];
        if((c+1 <= n)) t += cur[r][c+1];
        if((r-1 >= 0) && (c-1 >= 0)) t += cur[r-1][c-1];
        if(( r+1 <= m) && ( c+1 <= n)) t += cur[r+1][c+1];
        if((r-1 >= 0 ) && ( c+1 <= n)) t += cur[r-1][c+1];
        if((r+1 <= m) && (c-1 >= 0)) t += cur[r+1][c-1];
        return t;
    }

    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>> cur = board;
        int m = board.size();
	    int n = board[0].size();
        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[0].size(); j++){
                int t = liveNeighbors(cur, i, j);
                if(board[i][j] == 0) {
                    if(t == 3) board[i][j] = 1;
                } else if(t < 2 || t > 3) board[i][j] = 0;
            }
        }
    }
};
