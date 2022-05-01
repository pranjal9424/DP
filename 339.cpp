void dfs(int src,vector<int> &vis,vector<int> g[]){
        vis[src]=1;
        for(auto x: g[src]){
            if(!vis[x]){
                dfs(x,vis,g);
            }
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        vector<int> g[n];
        
        vector<int> vis(n,0);
        if(connections.size() <n-1) return -1;
        
        for(int i=0;i<connections.size();i++){
            g[connections[i][0]].push_back(connections[i][1]);
            g[connections[i][1]].push_back(connections[i][0]);
        }
        
        int c=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                c++;
                dfs(i,vis,g);
            }
        }
        
        return c-1;
    }