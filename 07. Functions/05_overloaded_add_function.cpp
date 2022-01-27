//C++ Program to write overloaded function for addittion

#include<iostream>
using namespace std;

//Overloaded functions
int add(int x,int y){ //add function with two int parameters
	return x+y;
}

int add(int x,int y,int z){ //overloaded add function with three int parameters
	return x+y+z;
}

float add(float x,float y){ //Overloaded add function with two float parameters
	return x+y;
}

//main function
int main(){
	int a,b,c;
	float i,j;
	cout << "Enter three integer values: " << endl;
	cin >> a >> b >> c;
	cout << "Enter two float values: " << endl;
	cin >> i >> j;
	int d = add(a,b); //calling add function with two int parameters
	int e = add(a,b,c); //calling add function with three int parameters
	float k = add(i,j); //calling add function with two float parameters
	
	cout << "calling add function with first two int parameters, result = " << d << endl;
	cout << "calling add function with three int parameters, result = " << e << endl;
	cout << "calling add function with first two float parameters, result = " << k << endl;
	return 0;
}
