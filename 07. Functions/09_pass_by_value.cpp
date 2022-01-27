//C++ Program to demonstrate pass by value

#include<iostream>
using namespace std;
//function for swapping

void swap(int x,int y){ //Here x and y are formal parameters
	int temp;
	temp = x;
	x = y;
	y = temp;
}

//main funtion
int main(){
	int a,b;
	cout << "Enter the value of a and b: " << endl;
	cin >> a >> b;
	cout << "Before calling swap function:\na = "<<a<<"\nb = " << b << endl;
	swap(a,b); //Here a copy of actual parameter is passed to swap function
	//Hence the above function call will not modify the actual parameter values
	cout << "After calling Swap function:\na = "<<a<<"\nb = " << b << endl;
}
