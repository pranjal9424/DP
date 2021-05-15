#include<iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
    cin>>n;
    //initialize max and min here opposite value
    int mx=0,mn=1000;

    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

        //logic here
    for(int i=0;i<n;i++)
        {
            if(mx<arr[i])
                mx=arr[i];
            if(mn>arr[i])
                mn=arr[i];
        }

        cout<<"max="<<mx<<endl<<"min="<<mn;
}
