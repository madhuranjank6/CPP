// C++ program to print numbers from 1 to n using for looop

#include<iostream>
using namespace std;

int main(){
	int n;
	cout << "Enter the value of N: " << endl;
	cin >> n;
	for(int i=1;i<=n;i++){
		cout << i <<" ";
	}
	return 0;
}
