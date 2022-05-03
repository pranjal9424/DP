#include<bits/stdc++.h>
using namespace std;
bool solve(int src,int k,vector<pair<int,int> > g[],vector<bool> &vis){
    vis[src]=true;
    
    if(k<=0) return true;
    
    for(auto x:g[src]){
        int u=x.first;
        int w=x.second;
        
        if(vis[u]==true) continue;
        
        if(w>=k) return true;
        
        if(solve(u,k-w,g,vis)) return true;
    }
    
    vis[src]=false;
    return false;
}
int main()
{
    int v,e;
    
    cin>>v>>e;
    
    int k;
    cin>>k;
    
    vector<pair<int,int> > g[v+1];
    
    for(int i=0;i<e;i++){
        int s,d,w;
        cin>>s>>d>>w;
        g[s].push_back({d,w});
        g[d].push_back({s,w});
    }
    
    vector<bool> vis(v+1,false);
    cout<<solve(1,k,g,vis);
    
    return 0;
}
