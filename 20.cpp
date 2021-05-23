#include<iostream>
using namespace std;

void rightrotate(int arr[],int frm,int to){
    int temp=arr[to];
    for(int i=to;i>frm;i--)
        arr[i]=arr[i-1];
    arr[frm]=temp;
}
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int wi=-1;
    for(int i=0;i<n;i++)
    {
        if(wi!=-1){
            if((arr[wi]>=0 && arr[i]<0) || (arr[wi]<0 && arr[i]>=0))
                rightrotate(arr,wi,i);

            if(i-wi>=2)
                wi+=2;
            else
                wi=-1;
        }
        else{
            if((arr[i]<0 && i%2==1) || (arr[i]>=0 && i%2==0))
                wi=i;
        }

    }

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}



/*  test case
intput:     6
            -1,2,2,-2,-3,3

output:     -1,2,-2,2,-3,3

*/
