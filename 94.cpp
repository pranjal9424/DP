#include<iostream>
using namespace std;
int sqrint(int n)
{
    int h=n;
    int l=1;
    int ans=-1;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(mid<=n/mid)
        {
            ans=mid;
            l=mid+1;
        }
        else {
            h=mid-1;
        }
    }
    return ans;
}

int main()
{

    cout<<sqrint(4);
}