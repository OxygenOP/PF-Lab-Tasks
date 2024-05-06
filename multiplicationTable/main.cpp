#include<iostream>

using namespace std;

int main(){

    int number;

    cout << "Please input number: ";
    cin >> number;

    cout << "Multiplication table of " << number << endl;

    for(int i = 0; i <= 10; i++){
    
    cout << number << " x " << i << " = " << number * i << endl;

    }

 
    return 0;
}

