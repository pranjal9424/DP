#include<iostream>
#include <vector>
using namespace std;
int countprime(int n){
    if(n==0 || n==1)
        return 0;
    vector<int>dp(n,0);
	int c=0;
	for(int i=2;i<n;i++)
		if(dp[i]==0){
			for(int j=i;j<n;j+=i)
				dp[j]=1;
			c++;
		}
	return c;
}
int main()
{
	int n;
    cin>>n;
    cout<<countprime(n);
}