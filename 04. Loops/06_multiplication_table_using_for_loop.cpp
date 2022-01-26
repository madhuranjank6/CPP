//C++ Program to print multiplication table using for loop

#include<iostream>
using namespace std;

int main(){
	int num;
	cout << "Enter the number to print the multiplication table: " << endl;
	cin >> num;
	for(int i=1;i<=10;i++){
		cout << num << " X " << i << " = " << (num*i) << endl;
	}
	return 0;
}
