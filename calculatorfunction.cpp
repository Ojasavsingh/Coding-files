#include<iostream>
using namespace std;

int multiply(int x , int y)
{
     int answer1 = x*y;
     return answer1;
}
int sum(int x , int y)
{
    int answer2 = x+y;
    return answer2;
}
int difference(int x, int y)
{
    int answer3= x-y;
    return answer3;
}
int division(int x , int y)
{
    float answer4= x/y;
    return answer4;
}
int main()
{
    int a, b;
    cout<<"Enter a: \n";
    cin>>a;
    cout<<"Enter b: \n";
    cin>>b;
    int product = multiply(a,b);
    int addition = sum(a,b);
    int subtraction = difference(a,b);
    float  divide = division(a,b);
    
    cout<<"The product is: "<<product<<endl;
    cout<<"The sum is: "<<addition<<endl;
    cout<<"The subtraction is: "<<subtraction<<endl;
    cout<<"The division is: "<<divide<<endl;

    return 0;

}