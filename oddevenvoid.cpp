#include<iostream>
using namespace std;

void printoddeven(int n)
{
    if (n%2==0)
    {
        cout<<"Even"<<endl;
    }
    else
    {
        cout<<"Odd"<<endl;
    }
}

int main()
{
    int n = 10;
    printoddeven(n);
    printoddeven(34);

    return 0;

}
