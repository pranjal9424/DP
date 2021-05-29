#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;

    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int good=0;
    for(int i=0;i<n;i++)
        if(arr[i]<=k)
            good++;

    int bad=0;
    for(int i=0;i<good;i++)
        if(arr[i]>k)
            bad++;
    int ans=bad;

    ///logic started from here worst case o(n) space o(1)
    int j=good-1,i=0;
    while(j<n)
    {
        j++;
        if(arr[i]>k)
            bad--;
        if(arr[j]>k)
            bad++;
        i++;

        ans=min(ans,bad);
    }
    cout<<ans;
}


/*
    input :-    7 5
                2 7 9 5 8 7 4 2
    output:-    2
*/

