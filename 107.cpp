#include<bits/stdc++.h>
using namespace std;
int setBitCount(int num){
	int count = 0;
	while ( num )
	{
		if ( num & 1)
		count++;
		num >>= 1;
	}
	return count;
}
void sortBySetBitCount(int arr[], int n)
{
	multimap< int, int > count;

	for( int i = 0 ; i < n ; ++i )
	{
		count.insert({(-1) *
			setBitCount(arr[i]), arr[i]});
	}
	for(auto i : count)
	cout << i.second << " " ;
	cout << "\n" ;
}
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6};
	int n = sizeof(arr)/sizeof(arr[0]);
	sortBySetBitCount(arr, n);
}
