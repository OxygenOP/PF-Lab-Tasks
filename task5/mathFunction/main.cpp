#include<iostream>

using namespace std;

int main(){
    
    int num1, num2, average;

    //Taking User Input
    cout << "Input number 1: ";
    cin >> num1;

    cout << "Input number 2: ";
    cin >> num2;


    average = (num1 + num2) / 2;

    if(average <= 50){
        cout << "Average is below or equal to the threshhold of 50" << endl;
    } else {
        cout << "Average is above the threshhold of 50" << endl;

    }

    return 0;
}