#include <iostream>
using namespace std;
int main()
{
    int n=8;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=0,r=n-1;
    while(l<=r){
        int mid=(l+r)/2;
        int nxt=(mid+1)%n;
        int prev=(mid+n-1)%n;
        if(arr[mid]<=arr[nxt] && arr[mid]<=arr[prev]){
            cout<<mid;
            return 0;
        }

            if(arr[mid]<=arr[r]){
                r=mid-1;
            }
            else if(arr[l]<=arr[mid]){
                l=mid+1;
            }
    }
    return 0;
}
