// C++ program to print numbers from 1 to n using while looop

#include<iostream>
using namespace std;

int main(){
	int n,i=1;
	cout << "Enter the value of N: " << endl;
	cin >> n;
	while(i <= n){
		cout << i <<" ";
		i = i + 1;
	}
	return 0;
}
