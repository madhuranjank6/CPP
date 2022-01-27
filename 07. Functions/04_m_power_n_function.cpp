//C++ Program to find m power n using function

#include<iostream>
#include<math.h>
using namespace std;

//Function to calculate m power n
int power(int m, int n){
	int res=1;
	while(n>0){
		res = res*m;
		n = n-1;
	}
	return res;
}

//main Function
int main(){
	int a,b,c;
	cout << "Enter the base and power: " << endl;
	cin >> a >> b;
	c = power(a,b);
	cout << "Result = " << c << endl;
	return 0;
}
