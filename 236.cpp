int Maximize(int a[],int n)
    {
        // Complete the function
        sort(a,a+n);
        long long int i,sum=0;
        
        long long int val=pow(10,9)+7;
        for(i=0;i<n;i++){
            sum+=(a[i]*i);
        }
        return (sum%val);
    }