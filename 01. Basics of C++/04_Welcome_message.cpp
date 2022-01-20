//C++ program to display the welcome message

#include<iostream>
using namespace std;

int main(){
	string name;
	cout << "May I know your name: " << endl;
	cin >> name; //This will take only first word of the name
	cout << "Welcome " << name;
	return 0;
}
