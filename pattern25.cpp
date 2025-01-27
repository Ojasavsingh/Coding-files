#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int row = 0;row<=n;row++)
    {
        if(int column = 0; column<=n/2||column = n-row)
        {
            cout<<"*";
        }
        else
        {
            cout<<" ";
        }

        
    }
    cout<<endl;
    return 0;
}