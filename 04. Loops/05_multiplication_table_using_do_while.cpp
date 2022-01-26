//C++ Program to print multiplication table using do while loop

#include<iostream>
using namespace std;

int main(){
	int num;
	cout << "Enter the number to print the multiplication table: " << endl;
	cin >> num;
	int i = 1;
	do{
		cout << num << " X " << i << " = " << (num*i) << endl;
		i++;
	}while(i<=10);
	return 0;
}
