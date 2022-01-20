// C++ program to calculate Simple Interest

#include<iostream>
using namespace std;

int main(){
	float principal,rate,time,si;
	cout << "Enter the principal amount: " << endl;
	cin >> principal;
	cout << "Enter the rate of interest: "<<endl;
	cin >> rate;
	cout << "Enter the time: " << endl;
	cin >> time;
	si = (principal*rate*time)/100;
	cout << "Simple Interest = "<<si;
	return 0;
} 
