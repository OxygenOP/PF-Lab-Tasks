#include<iostream>

using namespace std;

int squares(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++ ){
        sum += i * i;
    }


return sum;
}


int squaresWhile(int n){
    int sum = 0;

    while(n >= 1){
    sum += n*n;
    n--;
    }


return sum;
}





int main(){ 
    
    cout << squares(3) << endl;
    cout << squares(8) << endl;
    cout << squaresWhile(3) << endl;
    cout << squaresWhile(8) << endl;



    return 0;
}