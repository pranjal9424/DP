#include<iostream>
using namespace std;
int main()
{
    int n,m,s;
    cin>>n>>m>>s;

    int arr1[n],arr2[m],arr3[s];
    for(int i=0;i<n;i++)
        cin>>arr1[i];

    for(int i=0;i<m;i++)
        cin>>arr2[i];

    for(int i=0;i<s;i++)
        cin>>arr3[i];

    int i=0,j=0,k=0;

    while(i<n && j<m && k<s){
        if(arr1[i]==arr2[j] && arr2[j]==arr3[k])
        {
            cout<<arr1[i]<<" ";
            i++;
            j++;
            k++;
        }else if(arr1[i]<arr2[j])
                    i++;
        else if(arr2[j]<arr3[k])
                    j++;
        else
            k++;
    }
}
