#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    int i,arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];

    int last=arr[n-1];

    for(i=n-2;i>=0;i--)
        arr[i+1]=arr[i];

    arr[0]=last;

    for(i=0;i<n;i++)
        cout<<arr[i];

    return 0;
}


