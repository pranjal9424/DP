#include<iostream>
using namespace std;
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}
int mid(int* arr,int n)
{
    int l=0;
    int h=n-1;
    while(l<=h){
        int m=(l+h)/2;

        if(m<h && arr[m+1]<arr[m])
            return m+1;

        if(m>l && arr[m]<arr[m-1])
            return m;

        if(arr[l]<=arr[m])
            l=m+1;
        else if(arr[m]<arr[h])
                h=m-1;
    }
}
int main()
{
    int arr[]={30, 40, 50, 10, 20};
    int n = sizeof(arr)/sizeof(arr[0]);

    int m=mid(arr,n);

    int f=binarySearch(arr,0, m-1, 40);
    int s=binarySearch(arr, m, n-1, 40);

    if(f!=-1)
        cout<<f;
    else
        cout<<s;
}
