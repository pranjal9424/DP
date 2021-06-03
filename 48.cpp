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
        if(str[l]!=str[h]){
            cout<<"Non Palindrome" ;
            return 0;
        }
        l++;
        h--;
    }

   cout<<"Palindrome";
}

