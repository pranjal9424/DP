class Solution 
{
    public:
    //Function to find a solved Sudoku.
    bool isSafe(int grid[N][N],int row,int col,int val){
        for(int i=0;i<9;i++){
            if(grid[row][i]==val) return false;
        }
        
        for(int i=0;i<9;i++){
            if(grid[i][col]==val) return false;
        }
        
        int cornerni=row/3*3;
        int cornernj=col/3*3;
        
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++)
                if(grid[cornerni+i][cornernj+j]==val) return false;
        }
        
        return true;
    }
    bool solsudo(int grid[N][N],int row,int col){
        
        if(row==N) return true;
        
        int ni=0;
        int nj=0;
        
        if(col==N-1){
            ni=row+1;
            nj=0;
        }
        else{
            ni=row;
            nj=col+1;
        }
        
        if(grid[row][col]!=0){
            return solsudo(grid,ni,nj);
        }
    
            for(int po=1;po<=N;po++){
                
                if(isSafe(grid,row,col,po)){
                    grid[row][col]=po;
                    if(solsudo(grid,ni,nj)){
                        return true;
                    }
                }
                
                grid[row][col]=0;
            }
        return false;
    }
    bool SolveSudoku(int grid[N][N])  
    { 
        // Your code here
        if(solsudo(grid,0,0)) return true;
        return false;
    }
    
    //Function to print grids of the Sudoku.
    void printGrid (int grid[N][N]) 
    {
        // Your code here
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++)
                cout<<grid[i][j]<<" ";
        }
    }
};