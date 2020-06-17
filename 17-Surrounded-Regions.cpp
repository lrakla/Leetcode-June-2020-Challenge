class Solution {
int dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
private:
        void dfs(vector<vector<char>>& board,int i,int j){
            int m = board.size(),n=board[0].size();
            board[i][j] ='*';
            for(auto d : dir){
                int x = i+d[0];
                int y = j+d[1];
                if(x<0 || x>=m || y<0 || y>=n || board[x][y]!='O') continue;
                dfs(board,x,y);
            }
        }
public:
    void solve(vector<vector<char>>& board) {
        if(board.size() ==0 || board[0].size()==0) return;
        int m  = board.size(),n=board[0].size();
        for(int i=0;i<n;i++){
            if(board[0][i]=='O')
                dfs(board,0,i);
            if(board[m-1][i]=='O')
                dfs(board,m-1,i);
        }
        for(int i=1;i<m-1;i++){
            if(board[i][0]=='O')
                dfs(board,i,0);
            if(board[i][n-1]=='O')
                dfs(board,i,n-1);
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                char c = board[i][j];
                if (c == '*') {
                    board[i][j] = 'O';
                } else if (c == 'O') {
                    board[i][j] = 'X';
                }
        }

        } 
    }
};