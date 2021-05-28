#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int a,b;
    cin>>a>>b;

    ///logic started from here worst case o(n)
    int l=0,r=n-1,temp;
    for(int i=0;i<=r;i++)
    {
        if(arr[i]<a)
        {
            temp=arr[i];
            arr[i]=arr[l];
            arr[l]=temp;
            l++;
        }
        else if(arr[i]>b){
            temp=arr[i];
            arr[i]=arr[r];
            arr[r]=temp;
            r--;
            i--;
        }
    }

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}


/*
    input :-    5
                6 3 2 1 5
                3 4
    output:-    1 2 3 5 6
*/
