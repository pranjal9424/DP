#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int a[n],b[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    for(int i=0;i<n;i++)
        cin>>b[i];




    ///logic started from here worst case o(logn) space o(1)
    int j=0,i=0,c,m1,m2;
    m1=m2=-1;
    for(c=0;c<=n;c++){
        if(i==n)
        {
            m1=m2;
            m2=b[0];
            break;
        }
        if(j==n)
        {
            m1=m2;
            m2=a[0];
            break;
        }
        if(a[i]<=b[j])
        {
            m1=m2;
            m2=a[i];
            i++;
        }else {
                m1=m2;
                m2=b[j];
                j++;
        }
    }
    cout<<(m1+m2)/2;
}


/*
    input :-    7 5
                2 7 9 5 8 7 4 2
    output:-    2
*/


