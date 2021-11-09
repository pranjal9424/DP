#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int minElements(int arr[], int n)
{
	sort(arr,arr+n);
  int s=0;
  for(int i=0;i<n;i++) s+=arr[i];
  
  int ans=0;
  int j=n-1;
  int s2=0;
  while(true){
  	s2+=arr[j];
    s-=arr[j];
    j--;
    ans++;
    if(s2>s){
      break;
  }}
    return ans;
}

// Driver function
int main()
{
	int arr[] = {2, 1, 2};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << minElements(arr, n) << endl;
	return 0;
}
