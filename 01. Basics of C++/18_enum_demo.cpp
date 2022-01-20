// C++ program to demonstrate enum

//enum is used to create user defined data type

#include<iostream>
using namespace std;

enum day {mon,tue,wed,thu,fri,sat,sun};

int main(){
	// day d = 0 //this will give error
	day d = mon; //this correct
	cout << d << endl; //0
	cout << mon << endl; //0
	cout << tue << endl; //1
	cout << wed << endl; //2
	cout << thu << endl; //3
	cout << fri << endl; //4
	cout << sat << endl; //5
	cout << sun << endl; //6
	return 0;
}
