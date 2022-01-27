//C++ Program to add two numbers using function

#include<iostream>
using namespace std;


//Function to add two numbers
int add(int x, int y){
	int z;
	z = x + y;
	return z;
}

//main function
int main(){
	int a,b,c;
	cout << "Enter two numbers to add: " << endl;
	cin >> a>>b;
	c = add(a,b); //calling the function and storing the value returned by function in c
	cout << "The Sum of the given two numbers is: "<<c<<endl;
	return 0;
}
