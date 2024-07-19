#include<iostream>
#include<cmath>

using namespace std;




float addition(float num1, float num2){
    return num1+num2;

}

float substraction(float num1, float num2){
        return num1-num2;

}

float multiplication(float num1, float num2){
        return num1*num2;

}

float division(float num1, float num2){
        return num1/num2;

}



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
    cout << "(+) to perform addition" << endl;
    cout << "(-) to perform substraction" << endl;
    cout << "(*) to perform multiplication" << endl;
    cout << "(/) to perform division" << endl;
    cout << "(\%) to perform modulus" << endl;
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

    


 switch ( operation)
    {
    case '+':
        result = addition(num1, num2);
        break;
     case '-':
        result = substraction(num1, num2);
        break;
     case '*':
        result = multiplication(num1, num2);
        break;
     case '/':
     if(num2 == 0){
        wrongInput = true;
        cout << "Number cannot be divided by zero" << endl;
        break;
     }
        result = division(num1, num2);
        break;
     case '%':
        result = fmod(num1, num2);
        break;
    default:
        wrongInput = true;
        break;
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