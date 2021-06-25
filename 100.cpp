#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    int i=0,j=1;
    while(i<n && j<n){
        if(i!=j && arr[j]-arr[i]==k)
        {
            cout<<arr[j]<<" "<<arr[i];
            return 0;
        }else if(arr[j]-arr[i]<k)
                    j++;
                else
                    i++;
    }

    cout<<"Not found";
    return 0;
}
