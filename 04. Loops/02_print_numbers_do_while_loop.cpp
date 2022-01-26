// C++ program to print numbers from 1 to n using do while looop

#include<iostream>
using namespace std;

int main(){
	int n,i=1;
	cout << "Enter the value of N: " << endl;
	cin >> n;
	do{
		cout << i <<" ";
		i = i + 1;
	}while(i <= n);
	return 0;
}
