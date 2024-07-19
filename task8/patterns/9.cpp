#include<iostream>

using namespace std;


int main(){


    for (int i = 0; i <= 5; ++i) {
        for(int j = 1; j <= 5; j++){

            
            if( j - i == 1 || j + i == 5 ){
                cout << "*";
            }else{
                cout << " ";
            }

        }


   

        cout << endl;
    }

  

    return 0;
}