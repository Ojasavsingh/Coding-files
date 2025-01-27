#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row;
    while(n<=row)
    {
        int space = 1;
        while(space<=n-row)
        {
          cout<<" ";
          space = space+1;
        }
        int column = 1;
        while(column<=row)
        {
            cout<<column;
            column++;
        }
        column = 1;
        column = column - 2;
        while(column<=row-1)
        {
            cout<<column;
            column--;
            
        }
        cout<<endl;
        row++;
    }
    return 0;
}