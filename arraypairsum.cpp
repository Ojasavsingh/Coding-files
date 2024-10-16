#include<iostream>
using namespace std;

void printpairs(int a[], int n, int X)
{
    for(int i = 0;i<n;++i)
    {
        int number1 = a[i];
        int number2 = X - number1;
        
        for(int j = i+1; j<n;++j)
        {
            if(number2 == a[j])
            {
                cout<<"("<<number1<<" , "<<number2<<")"<<endl;
            }
        }
    }

}

int main()
{
    int a[] = {1,2,4,6,8,9,0};
    int n = sizeof(a)/sizeof(int);

    printpairs(a,n,10);


    return 0;
}



