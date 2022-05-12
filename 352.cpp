#include <bits/stdc++.h>
using namespace std;

int graph[4][4]={   { 0,20,42,25},
                    { 20,0,30,34},
                    {42,30,0,10},
                    {25,34,10,0}};
int n=4;

int visted_all=(1<<n)-1;

int dp[16][4]={-1};

int salesman(int mask,int pos){
    if(mask==visted_all){
        return graph[pos][0];
    }
    
    if(dp[mask][pos]!=-1){
        return dp[mask][pos];
    }
    
    int ans=INT_MAX;
    
    for(int city=0;city<n;city++){
        if((mask&(1<<city))==0){
            int newans=graph[pos][city]+salesman(mask|(1<<city),city);
            
            ans=min(ans,newans);
        }
    }
    
    return dp[mask][pos]=ans;
}

int main()
{
    for(int i=0;i<(1<<n);i++){
        for(int j=0;j<n;j++){
            dp[i][j]=-1;
        }
    }
    
    cout<<salesman(0,0);
    return 0;
}
