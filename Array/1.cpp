#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int temp,l=0,s=n-1;
    while(l<s)
    {
        temp=arr[l];
        arr[l]=arr[s];
        arr[s]=temp;
        l++;
        s--;
    }

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
