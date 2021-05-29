#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;

    int a[n],b[m];
    for(int i=0;i<n;i++)
        cin>>a[i];

    for(int i=0;i<m;i++)
        cin>>b[i];



    ///logic started from here worst case o(logn) space o(1)
    int j=0,i=0,c,m1,m2;
    m1=m2=-1;
    if((n+m)%2==1){
    for(c=0;c<=(m+n)/2;c++){
        if(i!=n && j!=m)
        {
            m1=(a[i]>b[j])?b[j++]:a[i++];
        }else if(i<n){
                    m1=a[i++];
                }
                else{
                    m1=b[j++];
                }
    }
    cout<<m1;
    }
    else{
        for(c=0;c<=(n+m)/2;c++){
            m2=m1;
            if(i!=n && j!=m)
                m1=(a[i]>b[j])?b[j++]:a[i++];
            else if(i<n)
                    m1=a[i++];
                 else
                    m1=b[j++];
        }
        cout<<(m1+m2)/2;
    }
}


/*
    input :-    5 6
                -5 3 6 12 15
                -12 -10 -6 -3 4 10
    output:-    3
*/


