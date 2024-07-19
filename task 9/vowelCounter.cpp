#include<iostream>

using namespace std;

int countVowels(string text){
    int count = 0;
    for(int i = 0; i <= text.length(); i++ ){
        if(text[i] == 'a' || text[i] == 'A' || text[i] == 'e' || text[i] == 'E' || text[i] == 'i' || text[i] == 'I' || text[i] == 'o' || text[i] == 'O' || text[i] == 'u' || text[i] == 'U'){
            count++;   
        }
    }


return count;
}



int main(){
    string text;
    
    
    
    cout << "Input text string: ";
    getline(cin, text); 

    cout << countVowels(text) << endl;



    return 0;
}