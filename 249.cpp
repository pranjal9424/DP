#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int ones=0;
        
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==1) ones++;
        }
        sort(arr,arr+n,greater<int>());
        for(int i=0;i<ones;i++) cout<<"1 ";
        if((n-ones)==2 and arr[0]==3 and arr[1]==2) cout<<"2 3";
        else{
            for(int i=0;i<(n-ones);i++) cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
