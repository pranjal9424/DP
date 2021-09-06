#include <iostream>
using namespace std;
int solve(int* arr,int n,int m,int mid)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>mid) sum+=arr[i]-mid;
    }
    if(sum>=m) return 1;
    else return 0;
}


int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int lb=0;
    int ub=20;
    int ans=0;
    
    while(lb<=ub)
    {
        int mid=(lb+ub)/2;
        if(solve(arr,n,m,mid))
        {
            ans=mid;
            lb=mid+1;
        }else{
            ub=mid-1;
        }
    }
    cout<<ans;
    return 0;
}
