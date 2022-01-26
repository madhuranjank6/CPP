// C++ program to find the factorial of a small number

#include<iostream>
using namespace std;

int main(){
	int num,fact = 1;
	cout << "Enter the number(<=10) to calculate the factorial: " << endl;
	cin >> num;
	if(num == 0 || num == 1){
		cout << "factorial of " << num <<" is = " << fact << endl;
	}
	else{
		for(int i = 2;i<=num;i++){
			fact *= i;
		}
		cout << "factorial of " << num <<" is = " << fact << endl;
	}
	return 0;
}
