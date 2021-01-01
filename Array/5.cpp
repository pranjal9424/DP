#include<iostream>
#include<cstring>
using namespace std;
int main()
{

    int n,l=0,r;
    cin>>n;
    int arr[n],k;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    r=n-1;
    while(l<r)
    {
        while(arr[l]<0 && l<r)
            l++;
        while(arr[r]>1 && l<r)
            r--;
        if(l<r)
        {
            k=arr[l];
            arr[l]=arr[r];
            arr[r]=k;
            l++;
            r--;
        }

    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}

