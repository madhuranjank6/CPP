// C++ program to find the sum of first n natural numbers

#include<iostream>
using namespace std;

int main(){
	int n,sum;
	cout << "Enter the value of n: "<< endl;
	cin >> n;
	sum = (n*(n+1))/2;
	cout << "The sum of first " << n <<" Natural numbers is = " << sum << endl;
	return 0;
}
