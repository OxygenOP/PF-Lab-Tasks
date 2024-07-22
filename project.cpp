#include <iostream>
#include <stdlib.h> 


using namespace std;

// Code to Clear screen (basically console screen will reset)
void clearScreen(){
    // Used to clear screen
        #if _WIN32
        system("cls");
        #else
        system("clear");
        #endif
        cout << endl;
}


void printOrder(int selection[][2], int n, string food[4][4], float price[4][4], float discount ){
    cout << "Your Order" << endl << endl;
    int total = 0;
    cout << "Dish\t\t\tPrice" << endl;

    // Looping through selection to show menu
    for(int i = 0; i < n; i++){
            // Showing food name and price
            cout << food[selection[i][0]][selection[i][1]] << "\t\t\t" << price[selection[i][0]][selection[i][1]]  << endl;
            // Totaling up food prices
            total += price[selection[i][0]][selection[i][1]];    
    }
    
    // Applying discount
    if(discount){

        total -= total * discount;
        cout << "Discount: \t\t\t" <<  discount * 100 << "% discount applied" << endl;

    }
    cout << endl << "Total: \t\t\t" << total << endl; 

}


int main(){

    // Start Order

    // Start Menu

    int choice1 = 0;

    // You can Change Categories from here
    string category[4] = {"Breakfast", "Lunch", "Dinner", "Desert"};
    float discount = 0.0;


    // Food name for each category (the index matters)
    string food[4][4] = {
        {"Anda paratha", "Naan Chana"},
        {"Sandwich", "fruit chat"},
        {"Chicken Krahi", "Pulao"},
        {"Donut", "Brownie"},
    };

    // Price for each category (the index matters)
    float price[4][4] = {
        {100.0, 120.0},
        {320.0, 220.0},
        {1000.0, 500.0},
        {230.0, 300.0},
    };



    // Array that will hold the selected items
    int selectionSize = 0;
    int selection[selectionSize][2];

    // First menu option
    cout << "Take order (1)" << endl;
    cout << "Exit (0)" << endl;
    cout << "Choose an option: ";  
    cin >> choice1;

    // if 0 is selected we will exit the program
    if(choice1 == 0){

        cout << "Exiting..." << endl;
        return 0;

    }  else if (choice1 == 1){

        // Choice 1 means we take the order

        // k is for iteration tracking of the while loop
        int k = 0;


        while(true){
        
        // choice 2 is for Category and choice 3 is for food item
        int choice2 = 0, choice3 = 0;
        
        // Clears Console
        clearScreen();
        
        // Option to Bill the total
        cout << "Bill Total (0)" << endl;
        
        // Showing all the food categories as a menu
        for(int i = 0; i < 4; i++){

            // Adding one to the index to make it easier for user to choose
            cout << category[i] << " ("<< i + 1 << ") "<< endl;
        }
        // User chooses category
        cin >> choice2;

        // Clears food category menu
        clearScreen();

        // incase user choose bill total
        // Loop Exit statement
        if(choice2 == 0){
            break;
        }

        // decresing one to make user choice equal to an index of the array
        choice2--;
        
        cout << "Bill Total (0)" << endl;

        // Showing food items as a menu
        for (int j = 0; j <= 4; j++){
            if(food[choice2][j] != ""){
            
            // Adding one to the index to make it easier for user to choose
            cout << food[choice2][j] << "\t" << price[choice2][j]  <<  "RS ("<< j + 1 << ") "<< endl;
            } else {
                break;
            }
        }
        cin >> choice3;

        clearScreen();


        // Loop Exit statement
         if(choice3 == 0){
            break;
        }

        choice3--;

        // Increasing the size of the array
        selectionSize++;

        // Adding food category and item index to selection
        selection[k][0] = choice2;
        selection[k][1] = choice3;


        // Incrementing the iterator
        k++;

        }

        // If user has some food in selection
        if(selectionSize != 0){
        clearScreen();




        // Function to print order (bill)
        printOrder(selection,selectionSize,food,price, discount);
        
        // Choice option to make complete the bill, add discount or quit
        int choice4;

        cout << endl << "Quit (0)" << endl;
        cout << "Add Discount (1)" << endl;
        cout << "Complete Bill (2)" << endl;
        cin >> choice4;

        if(choice4 == 0){
            clearScreen();

            // Incase of quiting
            cout << "Cancelling Order Exiting..." << endl;
            return 0;
        } else if(choice4 == 1){

            // Adding discount as a percentage
            cout << "Input Discount amount as a percentage: ";
            cin >> discount;

            discount = discount / 100;
            
            // Printing order with discount
            printOrder(selection,selectionSize,food,price, discount);

        
        
        }
        else {
            cout << "exiting..." << endl;
            return 0;
        }
        }

    }


    return 0;
}


