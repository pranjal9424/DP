#include <iostream>
using namespace std;
int presentAP(int a,int b,int c){
    if(c==0){
        if(a==b) return 1;
        else return 0;
    }
    else{
        if((b-a)/c <0) return 0;
        else{
            if((b-a)%c==0) return 1;
            else return 0;
        }
    }
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    
    cout<<presentAP(a,b,c);
    return 0;
}
