#include<iostream>

using namespace std;

void printPrimes(int n){

    for (int i = 2; i <= n; i++){
        bool isPrime = true;
        for(int j = 2; j <= i/2; j++){
            if(i % j == 0){
                isPrime = false;
            }

        }
        if(isPrime){
            cout << i << ", ";
        }
    }

    cout << endl;
}



int main(){
    printPrimes(10);

    printPrimes(30);




    return 0;
}