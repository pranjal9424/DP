#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;

    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];

    int k;
    int l;
    for(k=n-2;k>=0;k--){
        if(arr[k]<arr[k+1])
            break;
    }

    //// terminate program print reverse arr if permutation is last combination
    if(k<0){
        for(i=n-1;i>=0;i--){
            cout<<arr[i];
        }
        return 0;
    }//check which no is just greater than arr[k]
    else
        for(l=n-1;l>k;l--)
        if(arr[l]>arr[k])
            break;


    ///swap k'th and l'th value
    int temp=arr[k];
        arr[k]=arr[l];
        arr[l]=temp;


    ///reverse array from k+1'th element
    int s=k+1,e=n-1;
    while(s<e)
    {
        temp=arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        s++;
        e--;
    }

    for(i=0;i<n;i++)
            cout<<arr[i];
}
