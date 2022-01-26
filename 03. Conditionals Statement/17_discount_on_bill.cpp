// C++  Program to offer discount on total bill amount

/*
Program should take total bill amount as input and calculate discount as follows:
if bill amount < 100, No discount
if bill amount >=100 and bill amount less than 500, discount = 10%
if bill amount >=500, discount = 20%
*/

#include<iostream>
using namespace std;

int main(){
	float totalBill, discount = 0.0f;
	cout << "Enter the total bill of the customer: " << endl;
	cin >> totalBill;
	if(totalBill<100){
		cout << "Total Amount after discount = " << totalBill << endl;
	}
	else if(totalBill>=100 && totalBill < 500){
		discount = totalBill*0.10;
		cout << "Total Amount after discount = "<<(totalBill-discount) << endl;
	}
	else if(totalBill>=500){
		discount = totalBill*0.20;
		cout << "Total Amount after discount = "<<(totalBill - discount) << endl;
	}
	return 0;
}
