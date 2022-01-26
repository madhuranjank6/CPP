//C++ Program to calculate the GCD of two Numbers

#include<iostream>
using namespace std;

int main(){
	int a,b;
	cout << "Enters the two numbers to find the GCD: " << endl;
	cin >> a >> b;
	while(a!=b){
		if(a>b){
			a = a - b;
		}else{
			b = b - a;
		}
	}
	
	cout << "GCD = " << a << endl; //both a and b is having  equal values so, both will give GCD
	return 0;
}
