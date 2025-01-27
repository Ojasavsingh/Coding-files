#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row = 1;
    while (row<=n){
        int column = 1;
        while(column<=n-row){
            cout<<" ";
            column++;

        }
        column = 1;
        while (column<= 2*n - row){
            cout<<column;
            column++;
        }
        column = 1;
        while(column<=n-row){
            cout<<" ";
            column++;

        }
        cout<<endl;
        row++;
    }
    return 0;

}