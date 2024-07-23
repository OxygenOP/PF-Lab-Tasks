#include <iostream>

using namespace std;

int calculate_sum( int arr[7]){
    int sum = 0;
    for(int i = 0; i <= 6; i++){
        sum += arr[i];
    }
    return sum;
}


int main(){

    int numbers[7] = {10,20,30,40,50,60,70};
    int sum_of_array = calculate_sum(numbers);

    cout << "Sum of elements in the \'numbers\' array: " << sum_of_array << endl;
    
    cout << "Original" << "\t\t"  << "Doubled" << endl;

    for(int i = 0; i <= 6; i++){
    cout << numbers[i] << "\t\t"  << numbers[i] * 2 << endl;    
    }    

    return 0;
}