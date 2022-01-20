//C++ program to display welcome message

#include<iostream>
using namespace std;

int main(){
	string name;
	cout << "May I know your name: " << endl;
	getline(cin,name); //This will read the complete line and not only the first word
	cout << "Welcome " << name << endl;
	return 0;
}
