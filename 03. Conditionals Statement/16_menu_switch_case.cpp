// C++ Program to display the arithmetic menu and perform operations according to user input using switch case

#include<iostream>
using namespace std;

int main(){
	cout <<"Choose the operation that you want to perform: "<<endl;
	cout <<"1. Add\n2. Subtract\n3. Multiply\n4. Divide" << endl;
	int a,b,opt;
	cin >> opt;
	cout << "Enter the first num: " << endl;
	cin >> a;
	cout << "Enter the second num: "<< endl;
	cin >> b;
	switch(opt){
		case 1:
			cout << "Addition = "<< (a+b) << endl;
			break;
		case 2:
			cout << "Subtract = " << (a-b) << endl;
			break;
		case 3:
			cout << "Multiplication = "<<(a*b)<<endl;
			break;
		case 4:
			cout << "Division = " << (a/b) << endl;
			break;
		default:
			cout << "Invalid Option" << endl;
	}
	return 0;
}
