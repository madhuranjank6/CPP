//C++ program to demonstrate local and global variables

#include<iostream>
using namespace std;

int g = 15; //global variable

void func(){
	int a = 4; //local variable
	cout << "a = " << a << endl;
	g = g + a;
	cout << "G = " << g << endl;
}

//main function
int main(){
	func();
	g++;
	cout << "G inside main function = " << g << endl;
}
