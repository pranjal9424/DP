#include <bits/stdc++.h>
using namespace std;
const int inf = 1e7;
int main()
{   
    int n,m;
    cin>>n>>m;
    
    vector<int> dis(n+1,inf);
    vector<vector<pair<int,int>>> graph(n+1);
    
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        
        graph[u].push_back({v,w});
        graph[v].push_back({u,w});
    }
    
    int source;
    cin>>source;
    
    dis[source]=0;
    // taking set
    set<pair<int,int>> s;
    s.insert({0,source});
    
    while(!s.empty()){
        auto x=*(s.begin());
        s.erase(x);
        
        for(auto it:graph[x.second]){
            if(dis[it.first]>dis[x.second]+it.second){
                s.erase({dis[it.first],it.first});
                dis[it.first]=dis[x.second]+it.second;
                s.insert({dis[it.first],it.first});
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<dis[i]<<" ";
    }
    
    
    return 0;
}
