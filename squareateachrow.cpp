#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    while(int i=1)
    {
        i<n;
        i++;
        {
            for(int j=n-1;j<n;j++)
            {
                if(i==j)
                {
                    cout<<i*i;
                }

            }
        }
    }

    cout<<endl;
    
    return 0;
}
