int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        vector<int> key(V);
        vector<int> mst(V);
        vector<int> parent(V);
        
        for(int i=0;i<V;i++){
            key[i]=INT_MAX;
            mst[i]=false;
            parent[i]=-1;
        }
        
        key[0]=0;
        parent[0]=-1;
        
        for(int i=0;i<V;i++){
            int mini=INT_MAX;
            int u;
            
            //find min wali node;
            for(int j=0;j<V;j++){
                if(mst[j]==false && key[j]<mini){
                    u=j;
                    mini=key[j];
                }
            }
            //mark min node as true;
            mst[u]=true;
            //check adjacent nodes
            for(auto it: adj[u]){
                int v=it[0];
                int w=it[1];
                
                if(mst[v]==false && w<key[v]){
                    parent[v]=u;
                    key[v]=w;
                }
            }
        }
        int ans=0;
        for(int i=1;i<V;i++){
            ans+=key[i];
        }
        
        return ans;
        
    }