#include<iostream>

using namespace std;

int main(){
    // Hassam Sohail
    // Roll Number SU92-BSSEM-S24-017
    
    int number1, number2, number3,average;

    cout << "Average Calculator" << endl;
    
    cout << "Input Number 1: ";
    cin >> number1;

    cout << "Input Number 2: ";
    cin >> number2;

    cout << "Input Number 3: ";
    cin >> number3;

    // Calculating the Average of 3 numbers
    average = (number1 + number2 + number3)/3;

    cout << "The Average of " << number1 << " , " << number2 << " and " << number3 << " is " << average <<endl;



    return 0;
}