#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;

    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    sort(arr,arr+n);
    int mn=INT_MAX,d;
    for(int i=0;i+m-1<n;i++){
        d=arr[i+m-1]-arr[i];
        if(d<mn)
            mn=d;
    }

    return 0;
}

