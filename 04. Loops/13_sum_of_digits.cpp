//C++ program to calculate the sum of digits of a number

#include<iostream>
using namespace std;

int main(){
	int num,sum=0;
	cout << "Enter the number whose sum of digit is to be calculated: " << endl;
	cin >> num;
	while(num>0){
		int r = num%10;
		sum += r;
		num /= 10;
	}
	cout << "The sum of digits of given number is " << sum << endl;
	return 0;
}
