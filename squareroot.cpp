#include<iostream>
using namespace std;
int main()
{
    int n;
    float ans;
    cin>>n;
    ans = 0;
    while(ans*ans<=n)
    {
        ans = ans + 1;
    } 
    ans = ans - 1;
    int precision;
    float inc = 0.1;
    precision = 1;
    while(precision<=3)
    {
        while(ans*ans<=n)
        {
            ans = ans + inc;
        }
        ans = ans - inc;
        inc = inc/10;
        precision = precision + 1;
    }
    cout<<ans<<endl;
    return 0;

        
}