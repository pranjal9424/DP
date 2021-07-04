#include<iostream>
using namespace std;
bool isMajority(int a[], int size, int cand){
    int count=0;
    for (int i=0;i<size;i++)
        if (a[i]==cand)
            count++;
    if (count>size/2)
        return 1;
    else
        return 0;
}
int main()
{
    int arr[] = { 1, 3, 3, 1, 2 };
    int n = (sizeof(arr)) / sizeof(arr[0]);

    int maj=arr[0];
    int c=1;

    for(int i=1;i<n;i++)
    {
        if(arr[i]==maj)
            c++;
        else
            c--;
        if(c==0)
        {
            maj=arr[i];
            c=1;
        }
    }
    if (isMajority(arr, n, maj))
        cout<<maj;
    else
        cout<<"No Majority Element";
}
