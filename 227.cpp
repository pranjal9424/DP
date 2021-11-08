int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	int pt=1;
    	int j=1;
    	int i=0;
    	
    	while(j<n){
    	    if(arr[j]<=dep[i])
    	        pt++;
    	   else
    	        i++;
    	   j++;
    	}
    	return pt;
    }