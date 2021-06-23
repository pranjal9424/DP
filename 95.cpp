#include<iostream>
using namespace std;
int main()
{
    int arr[] = { 1000, 11, 445,13, 330, 3000 };
    int n = 6;

    ////////logic start
    int i,mn,mx;
    if(n%2==0)
    {
        if(arr[0]>arr[1])
        {
            mx=arr[0];
            mn=arr[1];
        }
        else{
            mx=arr[1];
            mn=arr[0];
        }
        i=2;
    }
    else
    {
        mx=arr[0];
        mn=arr[0];
        i=1;
    }
    while(i<n-1)
    {
        if(arr[i]>arr[i+1])
        {
            if(arr[i]>mx)
            {
                mx=arr[i];
            }
            if(arr[i+1]<mn)
            {
                mn=arr[i+1];
            }
        }
        else
        {
            if(arr[i+1]>mx)
            {
                mx=arr[i+1];
            }
            if(arr[i]<mn)
            {
                mn=arr[i];
            }
        }
        i+=2;
    }
    cout<<mx<<" "<<mn;
}
