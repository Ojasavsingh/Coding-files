9#include <iostream>
using namespace std;

void printGaneshaPattern(int n) {
    for (int i = 1; i <= n; i++) {
        
        for (int j = n; j > i; j--) {
            cout << " ";
        }
       
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j <= i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= (2 * (n - i + 1) - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of levels for Ganesha pattern: ";
    cin >> n;
    printGaneshaPattern(n);
    return 0;
}
