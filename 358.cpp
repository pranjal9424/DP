int isNegativeWeightCycle(int n, vector<vector<int>>edges){
	    // Code here
	    
	  
	    vector<int> dist(n,1e9);
    dist[0]=0;
    
    for(int iter=0;iter<n-1;iter++){
        for(auto e: edges){
            int u=e[0];
            int v=e[1];
            int w=e[2];
            dist[v]=min(dist[v],w+dist[u]);
        }
    }
    
    for (auto e: edges) {
        int u=e[0];
            int v=e[1];
            int w=e[2];
        if (dist[u] != INT_MAX && dist[u] + w < dist[v])
            return true;
    }
    return false;
	}