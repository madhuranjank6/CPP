//C++ Program to demonstrate function pointer

#include<iostream>
using namespace std;

void display(){
	cout << "Hello" << endl;
}

int main(){
	void (*fp)(); //Declaration
	fp = display; //Initialization
	fp(); //Function call	
	return 0;
}
