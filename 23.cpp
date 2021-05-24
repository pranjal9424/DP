#include<iostream>
using namespace std;
int main()
{
    int n,temp;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

        int mn=arr[0];
        int mx=arr[0];
        int pd=arr[0];

        for(int i=1;i<n;i++)
        {
            if(arr[i]<0)
            {
                temp=mn;
                mn=mx;
                mx=temp;
            }
            mn=min(arr[i],mn*arr[i]);
            mx=max(arr[i],mx*arr[i]);
            if(pd<mx)
                pd=mx;
        }
        cout<<pd;
}
