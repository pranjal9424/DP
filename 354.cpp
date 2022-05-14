class Solution {
public:
    vector<int> findCoordinate(int curr,int n){
        vector<int> ans(n);
        int r=n-1-(curr-1)/n;
        int c=(curr-1)%n;
        if(n%2==r%2){
            ans[0]=r;
            ans[1]=n-c-1;
        }
        else{
            ans[0]=r;
            ans[1]=c;
        }
        return ans;
    }
    int snakesAndLadders(vector<vector<int>>& board) {
        int n=board.size();
        
        int vis[1000][1000];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                vis[i][j]=0;
            }
        }
        int steps=0;
        queue<int> q;
        q.push(1);
        vis[n-1][0]=1;
        
        while(!q.empty()){
            int size=q.size();
            for(int i=0;i<size;i++){
                int x=q.front();
                q.pop();
                if(x==n*n) return steps;
                for(int k=1;k<=6;k++){
                    if(k+x> n*n) break;
                vector<int> pos(2);
                pos=findCoordinate(k+x,n);
                    int r=pos[0];
                    int c=pos[1];
                    if(vis[r][c]==1) continue;
                    vis[r][c]=1;
                    if(board[r][c]==-1){
                        q.push(k+x);
                    }
                    else{
                        q.push(board[r][c]);
                    }
                }
            }
            steps++;
        }
        return -1;
    }
    
};