#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int arr[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>arr[i][j];

    //////  logic start from here
    int mn=INT_MAX,mx=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i][0]<mn)
            mn=arr[i][0];
        if(arr[i][n-1]>mx)
            mx=arr[i][n-1];
    }

    int desire=(n*n+1)/2;
    int mid,place;
    while(mn<mx)
    {
        mid=mn+(mx-mn)/2;
        place=0;

        for(int i=0;i<n;i++)
            place+=upper_bound(arr[i],arr[i]+n,mid)-arr[i];

        if(place<desire)
            mn=mid+1;
        else
            mx=mid;
    }
    cout<<mn;
    return 0;
}

/*
    input:- 3
            1 3 5
            2 6 9
            3 6 9

   output:- 5
   */
