#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
void sort(int arr[], int n)
{
    map<int, int> count;
 
    for (int i=0; i<n; i++)
        count[arr[i]]++;
 
    map<int, int>::iterator it;
    int index = 0;
    for (it=count.begin(); it!=count.end(); ++it)
    {
        while(it->second--)
        arr[index++]=it->first;
    }
}
 
void printArray(int arr[], int n)
{
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
        cout << endl;
 }

int main()
{
    int arr[] = {100, 12, 100, 1, 1, 12, 100, 1, 12, 100, 1, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
 
    cout << "Input array is\n";
    printArray(arr, n);
 
    sort(arr, n);
 
    cout << "Sorted array is\n";
    printArray(arr, n);
 
    return 0;
}