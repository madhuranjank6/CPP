// C++ program to find maximum of two numbers

#include<iostream>
using namespace std;

int main(){
	int num1,num2;
	cout << "Enter 1st number: " << endl;
	cin >> num1;
	cout << "Enter 2nd number: " << endl;
	cin >> num2;
	if(num1>num2){
		cout << num1 <<" is Greater than " << num2 << endl;
	}else{
		cout << num2 << " is Greater than " << num1 << endl;
	}
	return 0;
}
