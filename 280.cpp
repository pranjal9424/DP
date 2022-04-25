char* reverse(char *S, int len)
{
    char* str;
    stack<char> st;
    
    for(int i=0;i<len;i++){
        st.push(S[i]);
    }
    
    for(int i=0;i<len;i++){
        S[i]=st.top();
        st.pop();
    }
 
 return S;   
}