#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row;
    while(row<=n)
  {
    int space;
    while(space<=n-row)
    {
        cout<<" ";
        space = space+1;
    }
    int column;
    while(column<=(2*row)-1)
    {
        cout<<column;
        row = row+1;
    }
    while(space<=row-1)
    {
        cout<<" ";
        space = space + 1;
    }
    cout<<endl;
    row = row+1;

   }
   return 0;
    
}