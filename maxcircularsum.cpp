#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,-1,4,-10,6,3,-20,4,1};
    int n =  sizeof(a)/sizeof(int);

    int sum = 0;
    int ans = 0;

    for(int i=0;i<n;i++)
    {
        sum+=a[i];

        if(sum>ans)
        {
            ans = sum;
        }
        if(sum<0)
        {
            sum = 0;
        }
    }
    
      int sum2=0 , Totalsum=0
}