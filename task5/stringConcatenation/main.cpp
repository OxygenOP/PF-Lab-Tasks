#include<iostream>

using namespace std;

int main(){

    string userInput1, userInput2, concatenated;

    //Taking User Input
    cout << "Input String 1: ";
    getline(cin,userInput1);

    cout << "Input String 2: ";
    getline(cin,userInput2);


    // Checking Length before conctenating
    if(userInput1.length() + userInput2.length() <= 10){
            concatenated = userInput1 + userInput2;
            cout << "This is the concatenated String: " << concatenated << endl;
    }else{
        cout << "Length of the string is too long" << endl;
    }

    return 0;
}