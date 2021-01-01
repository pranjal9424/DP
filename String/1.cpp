#include<iostream>
using namespace std;
int main()
{
    string arr;
    cin>>arr;
    int s=arr.size()-1,l=0,temp;

        while(l<s)
    {
        temp=arr[l];
        arr[l]=arr[s];
        arr[s]=temp;
        l++;
        s--;
    }
    cout<<arr;
}

