int f=0;
void dfs(int src,int parent,int col,vector<int> &vis,vector<int> adj[]){
    vis[src]=col;
    for(auto x:adj[src]){
        if(vis[x]==-1){
            dfs(x,src,3-col,vis,adj);
        }else if(x!= parent && col==vis[x]){
            f=1;
            break;
        }
    }
}
	bool isBipartite(int V, vector<int>adj[]){
	    
	    vector<int> vis(V,-1);
	    
	    for(int i=0;i<V;i++){
	        if(vis[i]==-1){
	            dfs(i,0,1,vis,adj);
	            if(f==1){
	                return false;
	            }
	        }
	    }
	    
	    return true;
	    // Code here
	}