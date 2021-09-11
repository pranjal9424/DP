#include <bits/stdc++.h>
using namespace std;
int main()
{
	while(true){
	    int n;
	    cin>>n;
	    if(n==0) break;
	    else{
	        int b1[n];
	        for(int i=0;i<n;i++) cin>>b1[i];
	        
	        int m;
	        cin>>m;
	        int b2[m];
	        for(int i=0;i<m;i++) cin>>b2[i];
	        
	        
	        int s1=0,s2=0,i=0,j=0;
	        int ma=0;
	        while(i<n && j<m){
	            if(b1[i]<b2[j])
	                s1+=b1[i++];
	           else if(b2[j]<b1[i])
	                s2+=b2[j++];
	           else{
	               ma=ma+max(s1,s2)+b1[i];
	               s1=0;
	               s2=0;
	               i++;
	               j++;
	           }
	        }
	        while(i<n)
	            s1+=b1[i++];
	       while(j<m)
	            s2+=b2[j++];
	            
	       ma=ma+max(s1,s2);
	       cout<<ma<<endl;
	    }
	}
    return 0;
}
