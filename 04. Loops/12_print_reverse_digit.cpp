// C++ Program to display the digits of a number in reverse order

#include<iostream>
using namespace std;

int main(){
	int num;
	cout << "Enter the Number: " << endl;
	cin >> num;
	cout << "Digits of Number in reverse order are: " << endl;
	while(num>0){
		int r = num%10;
		cout << r <<" ";
		num = num/10;
	}
	return 0;
}
