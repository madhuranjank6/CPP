//C++ Program to find the sum of first n natural number

#include<iostream>
using namespace std;

int main(){
	int n,sum =0;
	cout << "Enter the value of n: " << endl;
	cin >> n;
	for(int i=1;i<=n;i++){
		sum = sum + i;
	}
	cout << "The Sum of first "<< n << " Natural Numbers is = " << sum << endl;
	return 0;
}
