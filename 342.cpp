void dfs(int src,vector<int> &vis,vector<int> adj[],vector<int> &s){
	    vis[src]=1;
	    
	    for(auto x:adj[src]){
	        if(!vis[x]){
	            dfs(x,vis,adj,s);
	        }
	    }
	    
	    s.push_back(src);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<int> s;
	    vector<int> vis(V,0);
	    
	    for(int i=0;i<V;i++){
	        if(!vis[i]){
	            dfs(i,vis,adj,s);
	        }
	    }
	    reverse(s.begin(), s.end());
	    
	    return s;
	}