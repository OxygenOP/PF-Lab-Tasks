#include<iostream>

using namespace std;


int main(){

    for(int i = 0; i <= 10; i++){
      
        for(int j = 1; j <= 5; j++){
              if(i == 0){
                cout << "Table of " << j << "\t";
                } else {
                cout << j << " * " << i << " = " << j * i << " \t";
                }
        }
        cout << endl;
    }

    return 0;
}