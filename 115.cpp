#include <iostream>
using namespace std;
int solve(int *a,int n,int mid,int m)
{
    int sum=0;
    int stu=1;
    for(int i=0;i<n;i++)
    {
        if(a[i]>mid) return 0;
        if(sum+a[i]>mid)
        {
            stu++;
            sum=a[i];
            if(stu>m) return 0;
        }
        else
            sum+=a[i];
    }
    if(stu==m)
    return 1;
    else
    return 0;
}
int main()
{
    int n,c;
    cin>>n>>c;
    
    int a[n];
    int s=0;
    for(int i=0;i<n;i++) 
    {
        cin>>a[i];
        s+=a[i];
    }
    int lb=0;
    int ub=s;
    int ans=0;
    while(lb<=ub)
    {
        int mid=(lb+ub)/2;
        if(solve(a,n,mid,c))
        {
            ans=mid;
            ub=mid-1;
        }
        else
        {
            lb=mid+1;
        }
    }
    cout<<ans;
    return 0;
}
