#include<iostream>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    if(ch>='A' and ch<='Z')
    {
        cout<<"Uppercase\n";
    }
    else if(ch>='a' and ch<='z')
    {
        cout<<"Lowercase\n";
    }
    else
    {
        cout<<"The entered character isnt an alphabet";
    }
    return 0;
}