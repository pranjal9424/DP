
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int left[n],right[n];
    left[0]=arr[0];
    for(int i=1;i<n;i++)
        left[i]=max(left[i-1],arr[i]);

    right[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--)
        right[i]=max(right[i+1],arr[i]);

    int ans=0;
    for(int i=0;i<n;i++)
        ans+=min(left[i],right[i])-arr[i];

    cout<<ans;

}


/*
    input :-    8
                3 1 2 4 0 1 3 2
    output:-    8
*/


