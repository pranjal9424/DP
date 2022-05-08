int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        
        int ans=0;
        vector<bool>vis(V,false);
        vector<int> key(V,INT_MAX);
        key[0]=0;
        
        
        for(int c=0;c<V;c++){
            int u=-1;
            for(int i=0;i<V;i++){
                if(!vis[i] && (u==-1 || key[i]<key[u])){
                    u=i;
                }
            }
            vis[u]=true;
            ans+=key[u];
            
            for(auto x:adj[u]){
                
                //cout<<x[0]<<" ";
               if(!vis[x[0]]){
                    key[x[0]]=min(key[x[0]],x[1]);
                }
            }
            
            
        }
        
        return ans;
    }