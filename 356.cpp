{
	public:
	//Function to find number of strongly connected components in the graph.
    vector<int> order;
    
    void dfs(int src,vector<int> &vis,vector<int> adj[]){
        vis[src]=1;
        for(auto x:adj[src]){
            if(!vis[x]){
                dfs(x,vis,adj);
            }
        }
        order.push_back(src);
    }
    
    
    void dfsr(int src,vector<int> &vis1,vector<int> rev[]){
        vis1[src]=1;
        for(auto x:rev[src]){
            if(!vis1[x]){
                dfs(x,vis1,rev);
            }
        }
    }
    int kosaraju(int V, vector<int> adj[])
    {
        //code here
        order.clear();
        vector<int> rev[V];
        for(int i=0;i<V;i++){
            for(auto x:adj[i]){
                rev[x].push_back(i);
            }
        }
        
        vector<int> vis(V,0);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                dfs(i,vis,adj);
            }
        }
        
        int c=0;
        vector<int> vis1(V,0);
        for(int i=V-1;i>=0;i--){
            if(!vis1[order[i]]){
                dfsr(order[i],vis1,rev);
                c++;
            }
        }
        
        return c;
        
        
    }