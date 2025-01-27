#include<iostream>
using namespace std;

int main()
{
    int arr[] = {7,6,3,4,1,2};
    int n = sizeof(arr)/sizeof(int);
    for(int i = 1; i<n; i++)
    {
        int key = arr[i];
        int pos = i-1;
        
        while(pos>=0 and arr[pos]>key)
        {
            arr[pos+1] = arr[pos];
            pos--;
        }
        arr[pos+1] = key;
    }
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}