#include <bits/stdc++.h>
using namespace std;
int merge1(int a[],int temp[],int left,int mid,int right){
    int i,j,k,inv=0;
    
    i=left;
    j=mid;
    k=left;
    while((i<=mid-1) && (j<=right)){
        if(a[i]<=a[j]){
            temp[k++]=a[i++];
        }
        else{
            temp[k++]=a[j++];
            inv+=(mid-i);
        }
    }
        while(i<=mid-1){
            temp[k++]=a[i++];
        }
        while(j<=right){
            temp[k++]=a[j++];
        }
        for(int m=left;m<=right;m++){
            a[m]=temp[m];
        }
    return inv;
    
}
int mergesor(int a[],int temp[],int left,int right){
    int inv=0;
    if(left<right){
        int mid=(left+right)/2;
        
        inv+=mergesor(a,temp,left,mid);
        inv+=mergesor(a,temp,mid+1,right);
        
        inv+=merge1(a,temp,left,mid+1,right);
    }
    return inv;
}
int main()
{
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++) cin>>a[i];
	    
	    int temp[n];
	    cout<<mergesor(a,temp,0,n-1);
	}
    return 0;
}
