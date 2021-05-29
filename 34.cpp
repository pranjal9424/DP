#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int ans=0;
    int i=0,j=n-1;
    while(i<j){
        if(arr[i]==arr[j])
        {
            i++;
            j--;
        }else if(arr[i]<arr[j])
        {
            i++;
            arr[i]+=arr[i-1];
            ans++;
        }else if(arr[j]<arr[i])
        {
            j--;
            arr[j]+=arr[j+1];
            ans++;
        }
    }
    cout<<ans;
}


/*
    case 1 :-
    input :-    4
                11 14 15 99
    output:-    3


    case 2 :-
    input :-    4
                1 4 5 1
    output:-    1
*/

