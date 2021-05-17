#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int i,j,arr1[n],arr2[m];
    for(i=0;i<n;i++)
        cin>>arr1[i];

    for(i=0;i<m;i++)
        cin>>arr2[i];


    ////Union
    cout<<"Union = ";
    i=0;
    j=0;
    while(i<n && j<m) {
        if (arr1[i]<arr2[j])
            cout<<arr1[i++]<<" ";
        else if (arr2[j]<arr1[i])
            cout<<arr2[j++]<< " ";
        else {
            cout<<arr2[j++]<< " ";
            i++;
        }
    }
    while(i<n)
        cout<< arr1[i++]<< " ";
    while(j<m)
        cout<<arr2[j++]<< " ";
    cout<<endl;


    //Intersection
    cout<<"Intersection = ";
    i=0;
    j=0;
    while(i<n&&j<m) {
        if(arr1[i]<arr2[j])
            i++;
        else if(arr2[j]<arr1[i])
            j++;
        else
        {
            cout<<arr2[j]<< " ";
            i++;
            j++;
        }
    }
    return 0;
}
