#include <iostream>
using namespace std;
int check(int p,int n)
{
    int temp=p,c=0,f=5;
    while(f <= temp)
    {
        c+=temp/f;
        f*=5;
    }
    int k=(c>=n);
    
    return k;
}
int main()
{
    int n;
    cin>>n;
    
    if(n==1)
    {
        cout<<5;
        return 0;
    }   
    int low=0;
    int high=n*5;
    while(low<high)
    {
        int mid=(low+high)/2;
        if(check(mid,n))
            high=mid;
        else
            low=mid+1;
    }
    cout<<low;
    return 0;
}
