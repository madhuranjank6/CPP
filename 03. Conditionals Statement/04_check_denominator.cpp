// C++ program to check if division is possible

#include<iostream>
using namespace std;

int main(){
	int numerator,denominator,result;
	cout << "Enter the value of Numerator: " << endl;
	cin >> numerator;
	cout << "Enter the value of Denominator: "<<endl;
	cin >> denominator;
	if(denominator == 0){
		cout << "Denominator is 0, Division not possible" << endl;
	}else{
		result = numerator/denominator;
		cout << "Division = " << result << endl;
	}
	return 0;
}
