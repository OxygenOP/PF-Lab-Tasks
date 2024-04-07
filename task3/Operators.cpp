#include<iostream>

using namespace std;

int main(){

    int number = 20;

    cout << "----------------------------------" << endl;
    cout << "             Increment            " << endl;
    cout << "----------------------------------" << endl << endl;


    //pre-increment
    int preIncrement = ++number; // The Value of preIncrement will be 21 and the value of number will be changed to 21 as well
    cout << "Pre-Increment: " << preIncrement << "\nnumber: " << number << endl;

    number = 20; //resetting the value

    int postIncrement = number++; //The Value of postIncrement will be 20 and the value of number is changed to 21 
    //as post increment returns the value and then performs the operation

    cout << "\n\nPost-Increment: " << postIncrement << "\nnumber: " << number << endl << endl;



    cout << "----------------------------------" << endl;
    cout << "             Decrement            " << endl;
    cout << "----------------------------------" << endl;



    number = 20; //resetting the value

    //pre-decrement
    int preDecrement = --number; // The Value of preDecrement will be 19 and the value of number will be changed to 19 as well
    cout << "\nPre-Decrement: " << preDecrement << "\nnumber: " << number << endl;

    number = 20; //resetting the value

    int postDecrement = number--; //The Value of postDecrement will be 20 and the value of number is changed to 19 
    //as post decrement returns the value and then performs the decrement operation

    cout << "\n\nPost-Decrement: " << postDecrement << "\nnumber: " << number << endl<<endl;






    return 0;
}