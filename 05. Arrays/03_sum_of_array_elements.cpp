//C++ program to print the sum of elements of the array

#include<iostream>
using namespace std;

int main(){
	int size, sum=0;
	cout << "Enter the size of the array: " << endl;
	cin >> size;
	int A[size];
	for(int i=0;i<size;i++){
		cout << "Enter the element at Position " << i+1 << ": "<<endl;
		cin >> A[i];
	}
	
	for(int i=0;i<size;i++){
		sum = sum + A[i];
	}
	
	cout << "The sum of elements of the given array is: " << sum << endl;
	return 0;
}
