vector<int> candyStore(int candies[], int N, int k)
    {
        // Write Your Code here
        sort(candies,candies+N);
        int i=0;
        int j=N-1;
        int mn=0;
        int mx=0;
        while(i<=j){
            mn+=candies[i];
            i++;
            j-=k;
        }
        reverse(candies,candies+N);
        i=0;
        j=N-1;
        while(i<=j){
            mx+=candies[i];
            i++;
            j-=k;
        }
        return   {mn,mx};
    }