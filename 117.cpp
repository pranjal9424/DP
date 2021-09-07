#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
static bool comp(vector<int> a,vector<int> b){
    return a[1]<b[1];
}
//////end must be in sorted manner
int main()
{
    int n;
    cin>>n;
    int start[n],end[n],profit[n];
    for(int i=0;i<n;i++) cin>>start[i];
    for(int i=0;i<n;i++) cin>>end[i];
    for(int i=0;i<n;i++) cin>>profit[i];
    
    
    vector<vector<int> > v(n);
    
    for(int i=0;i<n;i++)
    {
        int x=start[i];
        int y=end[i];
        int z=profit[i];
        v[i]={x,y,z};
    }
    sort(v.begin(),v.end(),comp);
    
    int dp[n];
    dp[0]=v[0][2];
    
    for(int i=1;i<n;i++)
    {
        int inc=v[i][2];
        int last=-1;
        int low=0;
        int high=i-1;
        
        while(low<=high)
        {
            int mid=(low+high)/2;
            
            if(v[mid][1]<=v[i][0])
            {
                last=mid;
                low=mid+1;
            }
            else high=mid-1;
        }
        if(last!=-1) inc+=dp[last];
        int exc=dp[i-1];
        dp[i]=max(inc,exc);
    }
    cout<<dp[n-1];
    return 0;
}
