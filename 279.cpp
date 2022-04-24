class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string str)
    {
        stack<char> st;
        char temp;
        
        for(int i=0;i<str.length();i++){
            if(str[i]=='(' || str[i]=='{' || str[i]=='['){
                st.push(str[i]);
                continue;
            }
            if(st.empty()){
                return false;
            }
            if(str[i]==')' || str[i]=='}' || str[i]==']'){
                switch(str[i]){
                    case ')':
                    temp=st.top();
                    st.pop();
                    if(temp=='{' || temp=='['){
                        return false;
                    }
                    break;
                    
                    case '}':
                    temp=st.top();
                    st.pop();
                    if(temp=='(' || temp=='['){
                        return false;
                    }
                    break;
                    
                    case ']':
                    temp=st.top();
                    st.pop();
                    if(temp=='{' || temp=='('){
                        return false;
                    }
                    break;
                    
                }
            }
        }
        return st.empty();
    }

};