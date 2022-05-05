public:
    struct cell{
        public:
        int x,y,dis;
        cell(){}
        cell(int i,int j,int val){
            x=i;
            y=j;
            dis=val;
            
        }
    };
    
    bool inside(int x,int y,int N){
        if(x>=1 && y>=1 && x<=N && y<=N) return true;
        return false;
    }
    //Function to find out minimum steps Knight needs to reach target position.
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	    // Code here
	    int di[]={-2,-1,1,2,2,1,-1,-2};
	    int dj[]={-1,-2,-2,-1,1,2,2,1};
	    queue<cell> q;
	    q.push(cell(KnightPos[0],KnightPos[1],0));
	    
	    bool vis[N+1][N+1];
	    
	    for(int i=1;i<=N;i++)
	        for(int j=1;j<=N;j++)
	            vis[i][j]=false;
	    
	    vis[KnightPos[0]][KnightPos[1]]=true;
	    while(!q.empty()){
	        cell t=q.front();
	        q.pop();
	        
	        if(t.x==TargetPos[0] && t.y==TargetPos[1]){
	            return t.dis;
	        }
	        
	        for(int i=0;i<8;i++){
	            int x=t.x+di[i];
	            int y=t.y+dj[i];
	            
	            if(inside(x,y,N) && !vis[x][y]){
	                q.push(cell(x,y,t.dis+1));
	                vis[x][y]=true;
	            }
	        }
	    }
	    
	    
	    
	    
	    
	}