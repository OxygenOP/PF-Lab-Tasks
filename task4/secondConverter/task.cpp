#include<iostream>

using namespace std;

int main(){

int seconds,minutes,secs;

cout << "Input Seconds: " ;
cin >> seconds;


minutes = seconds / 60;

secs = seconds % 60;

cout << minutes << " minutes and " << secs << " seconds" << endl;






return 0;
}