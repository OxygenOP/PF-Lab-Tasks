#include<iostream>

using namespace std;

int main(){
    // Odd number

    int startRange, endRange;

    cout << "Input Starting Number: ";
    cin >> startRange;

    cout << "Input Ending Number: ";
    cin >> endRange;
    
    for(int i = startRange; i <= endRange; i++ ){
        if(i % 2 != 0){
            cout << i << endl;
        }

    }

    return 0;
}

