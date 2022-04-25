vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        stack<long long> st;
        
        for(int i=n-1;i>=0;i--){
            long long curr=arr[i];
            while(!st.empty() && st.top()<=curr){
                st.pop();
            }
            arr[i]=st.empty()?-1:st.top();
            st.push(curr);
        }
        return arr;
    }