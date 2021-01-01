#include<iostream>
using namespace std;
int main()
{
    int ma=0,mi=1000;
    int n,k;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        if(ma<k)
            ma=k;
        if(mi>k)
            mi=k;
    }
    cout<<"Max:"<<ma<<endl;
    cout<<"Min:"<<mi;
}
