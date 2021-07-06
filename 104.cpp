#include <bits/stdc++.h>
using namespace std;

int main()
{

	int arr1[]={ 1, 5, 9, 10, 15, 20 };
	int arr2[] = { 2, 3, 8, 13 };
	int n = sizeof(arr1) / sizeof(arr1[0]);
	int m = sizeof(arr2) / sizeof(arr2[0]);


	/////////////logic start from here
    int i=0,j=0,k=n-1;

    while(i<k && j<m)
    {
        if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            swap(arr2[j++],arr1[k--]);
        }
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);



	for(int i=0;i<n;i++)
		cout<<arr1[i]<<" ";
	cout<<"\n";
	for(int i=0;i<m;i++)
		cout<<arr2[i]<<" ";
	return 0;
}
