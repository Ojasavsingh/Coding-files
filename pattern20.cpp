#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int row = 1; row<=n; ++row)
    {
        if(row==1)
        {
          for(int i=1; i<=2 * n-1; ++i)
          {
            cout<<"*";
          }
        }
        else
        {
            int space = 2 * row - 3;
            int stars = ((2 * n - 1) - space)/2;
            for(int i = 1; i<=stars;  ++i )
            {
                cout<<"*";
            }
            for(int i = 1; i<=space; ++i)
            {
                cout<<" ";
            }
            for(int i = 1; i<=stars; ++i)
            {
                cout<<"*";
            }
            
        }
        cout<<endl;
    }
    return 0;
}