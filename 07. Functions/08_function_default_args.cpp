//C++ program to demonstrate function with default arguments

#include<iostream>
using namespace std;

int add(int x, int y, int z=0){
	return x+y+z;
}

//main function
int main(){
	int a,b,c;
	cout << "Enter 3 numbers: " << endl;
	cin >> a >> b >> c;
	cout << "sum of first 2 numbers = " << add(a,b) << endl;
	cout << "Sum of all 3 numbers = " << add(a,b,c) << endl;
	return 0;
}
