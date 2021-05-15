#include<iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    //logic in o(n)
    int s=0,e=n-1,temp;
    while(s<e)
    {
        temp=arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        s++;
        e--;
    }

    //print reverse arr
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
