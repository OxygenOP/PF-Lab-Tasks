#include<iostream>

using namespace std;

int main(){

    int score;
    string grade;

    cout << "Please input your score: ";
    cin >> score;

    if(score > 100){
        cout << "Maximum score can be 100" << endl;
    }else if(score >= 90){
         grade = "Students grade is A";
    }else if(score >= 80 && score < 90){
         grade = "Students grade is B";
    }
    else if(score >= 70 && score < 80){
         grade = "Students grade is C";
    }else if(score >= 60 && score < 70){
         grade = "Students grade is D";
    }
    else if(score < 60 ){
         grade = "Students grade is F";
    }


    cout << grade << endl;

    return 0;
}

// A: Score >= 90
// B: 80 <= Score < 90
// C: 70 <= Score < 80
// D: 60 <= Score < 70
// F: Score < 60

