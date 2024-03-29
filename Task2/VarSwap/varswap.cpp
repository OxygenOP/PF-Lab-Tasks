#include<iostream>

using namespace std;

int main(){



    cout << "\n|-------------------------------|" << endl;
    cout << " Swapping using a third variable" << endl;


    // Swapping using a third variable
    int number1 = 5;
    int number2 = 10;
    int temp;

    //Before Swap
    cout << "\nBefore Swap\nnumber 1: " << number1 << "\nnumber 2: " << number2 << endl;


    //Swapping
    temp = number1;         // temp = 5
    number1 = number2;      // number1 = 5 => 10
    number2 = temp;         // number2 = 10 => 5 

    //Before Swap
    cout << "\nAfter Swap\nnumber 1: " << number1 << "\nnumber 2: " << number2 << endl;


        cout << "\n|-------------------------------------|" << endl;
        cout << " Swapping without using third variable" << endl;


    // Swapping without using third variable

    int number3 = 5, number4 = 10;

    // Before Swap
    cout << "\nBefore Swap\nnumber 3: " << number3 << "\nnumber 4: " << number4 << endl;

    //Swapping
    number3 += number4;             // number3 = 5+10 = 15
    number4 = number3 - number4;    // number4 = 15 - 10 = 5
    number3 =  number3 - number4;   // number3 = 15 - 5 = 10

    cout << "\nAfter Swap\nnumber 3: " << number3 << "\nnumber 4: " << number4 << endl;
    cout << "\n|-------------------------------------|" << endl;

    return 0;
}