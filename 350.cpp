#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    
    vector<vector<int>> edges;
    
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        
        edges.push_back({u,v,w});
    }
    
    int src;
    cin>>src;
    
    vector<int> dist(n,1e9);
    dist[src]=0;
    
    
    bool change=false;
    for(int iter=0;iter<n-1;iter++){
        for(auto e: edges){
            int u=e[0];
            int v=e[1];
            int w=e[2];
            
            if(dist[v]>w+dist[u]) change=true;
            
            dist[v]=min(dist[v],w+dist[u]);
        }
    }
    
    for(auto i: dist){
        cout<<i<<" ";
    }

    return 0;
}

/*
input :
5 8
0 1 -1
0 2 4
1 2 3
1 3 2
1 4 2
3 2 5
3 1 1
4 3 -3
0

output
0 -1 2 -2 1 
*/
