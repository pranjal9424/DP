public:
 
 vector<int> v;
    void solve(int src,vector<int> &visit,vector<int> adj[]){
        
        visit[src]=1;
        v.push_back(src);
        
        for(auto x:adj[src]){
            if(!visit[x]){
                solve(x,visit,adj);
            }
        }
        
    }
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> visit(V,0);
        solve(0,visit,adj);
        
        return v;
    }