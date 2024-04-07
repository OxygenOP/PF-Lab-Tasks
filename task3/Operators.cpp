#include<iostream>

using namespace std;

int main(){

    int number = 20;


    //pre-increment
    int preIncrement = ++number; // The Value of preIncrement will be 21 and the value of number will be changed to 21 as well
    cout << "Pre-Increment: " << preIncrement << "\nnumber: " << number << endl;

    number = 20; //resetting the value

    int postIncrement = number++; //The Value of postIncrement will be 20 and the value of number is changed to 21 
    //as post increment returns the value and then performs the operation

    cout << "\n\nPost-Increment: " << postIncrement << "\nnumber: " << number << endl;


    return 0;
}