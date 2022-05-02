void dfs(int i,int j,int vis[][501],int M[][COL],int n,int m){
    if(i<0 || j<0 || i>=n || j>=m) return;
    if(M[i][j]==0) return;
    if(!vis[i][j]){
    vis[i][j]=1;
    dfs(i-1,j+1,vis,M,n,m);
    dfs(i,j+1,vis,M,n,m);
    dfs(i+1,j+1,vis,M,n,m);
    dfs(i+1,j,vis,M,n,m);
    dfs(i+1,j-1,vis,M,n,m);
    dfs(i,j-1,vis,M,n,m);
    dfs(i-1,j-1,vis,M,n,m);
    dfs(i-1,j,vis,M,n,m);
    }
    
}
int countIslands(int M[][COL], int n, int m) {
    // your code goes here
    int vis[501][501];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            vis[i][j]=0;
        }
    }
    
    int c=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(vis[i][j]==0 && M[i][j]){
                dfs(i,j,vis,M,n,m);
                c++;
            }
        }
    }
 return c;   
}