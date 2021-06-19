#include<iostream>
using namespace std;
int binfind(int* arr,int n)
{
    int h=n-1;
    int l=0;

    while(l<=h)
    {
        int mid=(l+h)/2;
        if(arr[mid]<mid)
        {
            l=mid+1;
        }
        else if(arr[mid]>mid){
            h=mid-1;
        }
        else{
            return mid;
        }

    }
    return -1;
}

int main()
{
    int arr[10] = {-10, -1, 0, 3, 10, 11, 30, 50, 100};
    int n = sizeof(arr)/sizeof(arr[0]);


    cout<<binfind(arr,n);
}

