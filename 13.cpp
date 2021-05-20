
#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;

    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];

    int mn=0,msf=INT_MIN;

    /////kaden's algo used to find Largest sum contiguous subarray
    for(i=0;i<n;i++){
        mn+=arr[i];
        if(mn<arr[i])
            mn=arr[i];
        if(msf<mn)
            msf=mn;
    }

    cout<<msf;
}
