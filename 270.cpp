#include <bits/stdc++.h>

using namespace std;

void solve(int r,int c,vector<vector<int>> mat,vector<vector<bool>> visited,int &ans,int pi,int pj,int x,int y,int pathlength){
    if(pi==x && pj==y){
        if(ans<pathlength)
            ans=pathlength;
        return;
    }
    if(pi<0 || pj<0 || pi>=r || pj>=c || visited[pi][pj] || mat[pi][pj]==0){
        return;
    }
    visited[pi][pj]=true;
    
    solve(r,c,mat,visited,ans,pi,pj+1,x,y,pathlength+1);
    solve(r,c,mat,visited,ans,pi,pj-1,x,y,pathlength+1);
    solve(r,c,mat,visited,ans,pi-1,pj,x,y,pathlength+1);
    solve(r,c,mat,visited,ans,pi+1,pj,x,y,pathlength+1);
    
    visited[pi][pj]=false;
    return;
}

int main()
{
    int r,c;
    cin>>r>>c;
    int x,y;
    
    vector<vector<int>> mat(r,vector<int> (c,0));
    
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>mat[i][j];
            
    cin>>x>>y;
    
    vector<vector<bool>> visited(r,vector<bool> (c,false));

    int ans=INT_MIN;
    
    solve(r,c,mat,visited,ans,2,2,x,y,0);
    
    cout<<ans;
    return 0;
}
