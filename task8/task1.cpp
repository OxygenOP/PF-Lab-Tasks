#include<iostream>

using namespace std;


void printNumbers(int n){
    for(int i = 1; i <= n; i++){
        cout << i << " ";
    }
    cout << endl;

}

int main(){
    printNumbers(10);

    printNumbers(3);

    printNumbers(12);




    return 0;
}