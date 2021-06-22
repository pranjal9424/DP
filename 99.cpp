#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[] = {2, 4, 5, 7, 7, 6};
	int x = 5;
	int k = 2;
	int n = sizeof(arr)/sizeof(arr[0]);


	int i=0;
	while(i<n)
	{
		if(arr[i]==x){
			cout<<i;
			return 0;
		}
		int y=max(1,abs(arr[i]-x)/k);
		i=i+y;
	}

	cout<<"Not found";
	return 0;
}
