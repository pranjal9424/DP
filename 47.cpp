#include<iostream>
using namespace std;
int main()
{
    string str;
    cin>>str;

    int l=0;
    int h=str.size()-1;
    char temp;
    while(l<h)
    {
        temp=str[l];
        str[l]=str[h];
        str[h]=temp;
        l++;
        h--;
    }

    cout<<str;
}
