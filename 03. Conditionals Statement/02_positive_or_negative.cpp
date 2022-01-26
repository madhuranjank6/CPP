// C++ Program to check whether a number is positive or negative

#include<iostream>
using namespace std;

int main(){
	int num;
	cout << "Enter the number: " << endl;
	cin >> num;
	if(num>=0){
		cout << "Number is Positive" << endl;
	}else{
		cout << "Number is Negative" << endl;
	}
	return 0;
}
