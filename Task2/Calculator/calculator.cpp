#include<iostream>
#include<cmath>

using namespace std;




int main(){


    cout << "This is a Calculator \nMade by Hassam Sohail \n\n\n";


    // Initializing Default Variable
    double num1,num2, result;
    char operation;
    bool wrongInput = false;
    



    //Get User Input
    cout << "Input your statement in the form of\n\n\"num1 + num2\"\noperators you can use are\n\n+ , - , * , / , % " << endl;
    cin >> num1 >> operation >> num2;


    //Perform Arithmetic Operation
    switch ( operation)
    {
    case '+':
        result = num1+num2;
        break;
     case '-':
        result = num1-num2;
        break;
     case '*':
        result = num1*num2;
        break;
     case '/':
        result = num1/num2;
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


    return 0;
}

