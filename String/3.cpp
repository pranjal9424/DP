#include<iostream>
using namespace std;
int main()
{
    int arr[26]={0};
    string str;
    cin>>str;
    int i=0;
    while(str[i]){
        arr[str[i]-97]++;
        i++;
    }
    for(int i=0;i<26;i++)
        if(arr[i]>1)
            cout<<char(i+97)<<endl;
}
