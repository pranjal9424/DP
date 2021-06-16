#include <iostream>
using namespace std;
void permutation(string ques,string asf)
{
    if(ques.length()==0)
    {
        cout<<asf<<endl;
        return;
    }
    for(int i=0;i<ques.length();i++)
    {
        char ch=ques[i];
        string ql=ques.substr(0,i);
        string qr=ques.substr(i+1);
        string rob=ql+qr;
        permutation(rob,asf+ch);
    }
}
int main()
{
    string str;
    cin>>str;

    permutation(str,"");
    return 0;
}
