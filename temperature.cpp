#include<iostream>
using namespace std;
int main()
{
    int initialval,finalval,cel,fah,step;
    cin>>initialval>>finalval>>step;
    fah = initialval;
    while (fah<=finalval)
    {
        
        cel = (5/9.0) * (fah-32);
        cout<<fah<<' '<<cel<<"\n";
        fah = fah+step;
    }
    cout<<endl;
    return 0;


}
