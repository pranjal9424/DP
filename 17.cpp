#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int mn=INT_MAX,mx=0;
    for(int i=0;i<n;i++){
        mn=min(mn,arr[i]);
        mx=max(mx,arr[i]-mn);
    }
    cout<<mx;

}
