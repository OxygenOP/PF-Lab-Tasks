#include<iostream>


using namespace std;

string username , password;
int attempts = 3;

int registerUser()
  {
  	cout << "Input username for registeration: ";
  	cin >> username;
  	cout << "Input password for registeration: ";
  	cin >> password;
  }
  
void login() 
  {
    string confirmUsername, confirmPassword;

  while(attempts >= 1)
   {
	cout << "Login Attempts: " << attempts << endl  ;
	cout << "Registered Username: ";
	cin >> 	confirmUsername;
	cout << "Registered Password: ";
	cin >>	confirmPassword;

	if(confirmPassword != username || confirmPassword != password)
	 {
		cout <<	"Password is Incorrect"; 
		attempts -= 1;
		if(attempts == 0){
            cout << "Last attempt failed account locked..." << endl;
        }
	 } 
	else 
	 {
		cout <<	"You have successfully logged in";
		break;	
	 }
  }	



  }

int main ()
  {
  	
  	registerUser();
  	login();
  	
  }
