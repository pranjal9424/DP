#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum;
    cin>>n>>sum;

    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    //logic start from here
    int l,r;
    sort(arr,arr+n);
    for(int i=0;i<n-2;i++)
    {
        l=i+1;
        r=n-1;
        while(l<r){
            if(arr[i]+arr[l]+arr[r]==sum)
            {
                cout<<arr[i]<<" "<<arr[l]<<" "<<arr[r];
                return 0;
            }else   if(arr[i]+arr[l]+arr[r]<sum)
                        l++;
                    else
                        r--;
        }
    }
    cout<<"NO";
                return 0;
}
