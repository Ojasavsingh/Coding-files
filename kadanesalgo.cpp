#include<iostream>
using namespace std;
int main()
{
  int a[]={1,2,4,-3,8,2,-7,3,-10};
  int n = sizeof(a)/sizeof(int);

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
  cout<<ans<<endl;
  return 0;

}