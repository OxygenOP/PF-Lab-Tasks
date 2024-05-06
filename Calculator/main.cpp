#include<iostream>
#include<cmath>

using namespace std;




int main(){


    cout << "This is a Calculator \nMade by Hassam Sohail \n\n\n";


    
    


while(true){

    // Initializing Default Variable
    double num1,num2, result;
    char operation;
    bool wrongInput = false;


    // Get User Input
    cout << "Calculator Menu" << endl;
    cout << "(0) to exit calculator" << endl;
    cout << "(+ or 1) to perform addition" << endl;
    cout << "(- or 2) to perform substraction" << endl;
    cout << "(* or 3) to perform multiplication" << endl;
    cout << "(/ or 4) to perform division" << endl;
    cout << "(\% or 5) to perform modulus" << endl;
    cout << ">> ";


    cin >> operation;

    if(operation == '0'){
        cout << "Thank you for using the calculator" << endl;
        cout << "Closing..." << endl;
        break;

    }

    cout << "Input number 1: ";
    cin >> num1;
    
    cout << "Input number 2: ";
    cin >> num2;


    //Perform Arithmetic Operation

    
    if(operation == '1' || operation == '+'){
        result = num1+num2;
    }
    else if(operation == '2' || operation == '-'){
                result = num1-num2; 
    }
    else if(operation == '3' || operation == '*'){
                result = num1*num2; 
    }
    else if(operation == '4' || operation == '/'){

        if(num2 == 0){

            wrongInput = true;
            cout << "Number cannot be divided by zero" << endl;

        }
        result = num1/num2;
    }
    else if(operation == '5' || operation == '%'){
                result = fmod(num1, num2);
    }
    else {
                wrongInput = true;
    }


    //Output to user

    if(wrongInput){
        cout << "The Form of Input was incorrect, or the arithmetic operation doesn't exist.." << endl;
    }
    else{
        cout << num1 << " " << operation << " " << num2 << " = " << result << endl;
    }
}

    return 0;
}