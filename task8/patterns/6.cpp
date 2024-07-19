#include<iostream>

using namespace std;


int main(){

    for(int i = 1; i <= 3; i++){
        for(int k = 1; k <= 3-i; k++){
            cout << " ";
        }
        for(int j =1; j <= i; j++){
            cout << "*";

        }

        cout << endl;
    }


     for(int i = 2; i >= 1; i--){
        for(int k = 1; k <= 3-i; k++){
            cout << " ";
        }
        for(int j =1; j <= i; j++){
            cout << "*";

        }

        cout << endl;
    }

    return 0;
}