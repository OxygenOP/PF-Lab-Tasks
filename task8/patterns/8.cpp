#include<iostream>

using namespace std;


int main(){


    int n = 3; // Number of rows in the pyramid

    for (int i = 1; i <= n; ++i) {
        // Print spaces
        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }
        // Print stars
        for (int k = 1; k <= 2 * i - 1; ++k) {
            cout << "*";
        }

        cout << endl;
    }

        for (int i = n-1; i > 0; --i) {
        // Print spaces
        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }
        // Print stars
        for (int k = 1; k <= 2 * i - 1; ++k) {
            cout << "*";
        }
        cout << endl;
    }



    return 0;
}