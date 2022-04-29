bool solve(int src,vector<int> &vis,vector<int> &order,vector<int> adj[]){
        vis[src]=1;
        order[src]=1;
        for(auto x:adj[src]){
            if(!vis[x]){
                bool cycle=solve(x,vis,order,adj);
                if(cycle==true){
                    return true;
                }
            }else if(order[x]) return true;
        }
        order[src]=0;
        return false;
        
    }
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        
        vector<int> vis(V,0);
        vector<int> order(V,0);
        
        for(int i=0;i<V;i++){
            if(!vis[i]){
                bool cycle=solve(i,vis,order,adj);
                if(cycle==true){
                    return true;
                }
            }
        }
        return false;
    }