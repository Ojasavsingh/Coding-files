#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   
   for(int i = 1; i<=n; i++)
   {
    for(int stars = 1; stars<=i; ++stars)
    {
        cout<<"*";
    }
    
    cout<<" ";
    
    for(int stars = 1; stars<=n-i+1; ++stars)
    {
        cout<<"*";
    }
    
    cout<<" ";

    for(int stars = 1; stars<=n-i+1; stars++)
    {
        cout<<"*";
    }

    cout<<" ";

    for(int stars = 1; stars<=i; ++stars)
    {
        cout<<"*";
    }
    cout<<endl;

    }
    
    return 0;
   
}