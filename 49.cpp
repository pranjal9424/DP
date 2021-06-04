#include<iostream>
using namespace std;
int main()
{
    string str;
    cin>>str;

    int arr[25]={0};
    int i=0;

    while(str[i]!='\0')
    {
        arr[str[i]-97]++;
        i++;
    }

    for(int i=0;i<25;i++)
        if(arr[i]>=2)
            cout<<char(i+97)<<" ";

}
