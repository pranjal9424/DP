#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;

    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];


    int mn=INT_MAX;
    /*
    //////brute force
    int s=0;
    for(int i=0;i<n;i++){
            s=0;
        for(int j=i;j<n;j++){
            s+=arr[j];
            if(s>x)
                mn=min(mn,j-i+1);
        }
    }*/


    int i=0,j=0;
    int s=0;
    while(i<=j && j<n)
    {
        while(s<=x && j<n)
            s+=arr[j++];
        while(s>x && i<j)
        {
            mn=min(mn,j-i);
            s-=arr[i];
            i++;
        }
    }
    cout<<mn;
}
