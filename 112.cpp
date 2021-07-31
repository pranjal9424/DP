#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
	cin>>n;
	int a[n];

	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	int en=n-1,st=0;

	while(st<en)
    {
        int mid=(en+st)/2;
        if(a[mid]>a[mid+1]){
            cout<<a[mid+1];
            return 0;
        }else if(a[st]<a[mid])
                    st=mid+1;
                else
                    en=mid-1;
    }
    return 0;
}
