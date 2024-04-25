#include<iostream>

using namespace std;

int main(){

    string input_1, input_2, concatenatedString;

    cout << "Input string 1: ";
    getline(cin,input_1);

    cout << "Input string 2: ";
    getline(cin,input_2);

    concatenatedString = input_1 + input_2;

    cout << "Concatenated String: " << concatenatedString <<endl;
    

    return 0;
}