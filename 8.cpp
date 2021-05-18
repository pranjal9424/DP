#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    int i,arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];

    /////// kadane's algorithm
    int men=0,msf=INT_MIN;
    for(i=0;i<n;i++){
        men+=arr[i];
        if(men<arr[i])
            men=arr[i];
        if(msf<men)
            msf=men;
    }

    cout<<msf;

    return 0;
}

