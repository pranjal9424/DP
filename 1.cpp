#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
        
    int s=0,e=n-1,tmp;
    while(s<e)
    {
        tmp=arr[s];
        arr[s]=arr[e];
        arr[e]=tmp;
        s++;
        e--;
    }
    
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}