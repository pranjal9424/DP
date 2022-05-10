void shortest_distance(vector<vector<int>>&g){
	    for(int k=0;k<g.size();k++){
	        for(int i=0;i<g.size();i++)
	        for(int j=0;j<g.size();j++){
	            if(i==k || j==k || g[i][k]== -1 || g[k][j]== -1){
	                continue;
	            }
	            g[i][j]=min(g[i][j]==-1 ? INT_MAX:g[i][j],g[i][k]+g[k][j]);
	        }
        }
    }