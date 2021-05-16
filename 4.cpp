#include<iostream>
using namespace std;

int main()
{
    int n,temp;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int lo=0,mid=0,hi=n-1;
    while(mid<=hi){
        switch(arr[mid])
        {
            case 0:
                {
                temp=arr[mid];
                arr[mid]=arr[lo];
                arr[lo]=temp;
                mid++;
                lo++;
                }
                break;
            case 1:
                mid++;
                break;
            case 2:{
                temp=arr[mid];
                arr[mid]=arr[hi];
                arr[hi]=temp;
                hi--;
                }
            break;
        }
    }

    for(int i=0;i<n;i++)
        cout<<arr[i];
}
