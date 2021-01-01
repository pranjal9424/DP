#include<iostream>
using namespace std;
int main()
{
    string arr;
    cin>>arr;
    int s=arr.size()-1,l=0,temp;

    while(l<s)
    {
        if(arr[l]!=arr[s]){
            cout<<"non palindrome";
            return 0;
        }
        l++;
        s--;
    }
    cout<<"palindrome";
}
