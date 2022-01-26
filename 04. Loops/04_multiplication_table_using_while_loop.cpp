//C++ Program to print multiplication table using while loop

#include<iostream>
using namespace std;

int main(){
	int num;
	cout << "Enter the number to print the multiplication table: " << endl;
	cin >> num;
	int i = 1;
	while(i<=10){
		cout << num << " X " << i << " = " << (num*i) << endl;
		i++;
	}
	return 0;
}
