#include<iostream>
using namespace std;
int binfind(int* arr,int x,int tog,int n)
{
    int h=n-1;
    int l=0;
    int ans=-1;

    while(l<=h)
    {
        int mid=(l+h)/2;
        if(arr[mid]<x)
        {
            l=mid+1;
        }
        else if(arr[mid]>x){
            h=mid-1;
        }
        else{
            ans=mid;
            if(to==-1) h=mid+tog;
            else l=mid+tog;
        }

    }
    return ans;
}

int main()
{
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int fo=binfind(arr,x,-1,n);
    int lo=binfind(arr,x,1,n);

    cout<<fo<<endl<<lo;
}

