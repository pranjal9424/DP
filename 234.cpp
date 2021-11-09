#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    
    int zc=0;
    int nc=0;
    int mx_n=INT_MIN;
    int prod=1;
    
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            zc++;
            continue;
        }else if(arr[i]<0){
            nc++;
            mx_n=max(arr[i],mx_n);
        }
        prod*=arr[i];
    }
    if(zc==n) cout<<"0";
    else if(nc==1 and nc+zc==n) cout<<"0";
    else if(nc%2!=0) prod=prod/mx_n;
    cout<<prod;
    return 0;
}
