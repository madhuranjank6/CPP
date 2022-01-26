//C++ Program to check if the year is leap year or not

/*
A year is a leap year if it is perfectly divisible by 4 except for the century years
(years ending with 00) which is leap year only if it is perfectly divisible by 400.
*/

#include<iostream>
using namespace std;

int main(){
	int year;
	cout << "Enter the year to check if it is Leap year or not: " << endl;
	cin >> year;
	if(year%4==0){
		if(year%100 == 0 ){
			if(year%400==0){
				cout << year << " is Leap year" << endl;
			}
			else{
				cout << year <<" is not a Leap year" << endl;
			}
		}
		else{
			cout << year << " is Leap Year" << endl;
		}
	}
	else{
		cout << year << " is not a Leap Year" << endl;
	}
	return 0;
}
