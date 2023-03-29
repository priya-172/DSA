class Solution {
    bool isplace(int row,int col,vector<string>&board,int n){
        int uprow=row;
        int upcol=col;
        while(row>=0 && col>=0){
            if(board[row][col]=='Q') return false;
            row--;
            col--;
        }
        row=uprow;
        col=upcol;
        while(col>=0){
            if(board[row][col]=='Q') return false;
            
            col--;
        }
         row=uprow;
        col=upcol;
        while(row<n && col>=0){
            if(board[row][col]=='Q') return false;
            row++;
            col--;
        }
        return true;
    }
public:
    void slove(int col, vector<vector<string>>&ans,vector<string>&board,int n){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;++row){
            if(isplace(row,col,board,n)){
                board[row][col]='Q';
                slove(col+1,ans,board,n);
                    board[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
         vector<vector<string>>ans;
        vector<string>board(n);
     string s(n,'.');
    for(int i=0;i<n;++i){
        board[i]=s;
    }
        slove(0,ans,board,n);
        return ans;
    }
};
