//C++ Program to find the minimum element in the array

#include<iostream>
using namespace std;

int main(){
	int size;
	cout << "Enter the size of the array: " << endl;
	cin >> size;
	int arr[size];
	for(int i=0;i<size;i++){
		cout << "Enter the element at position "<<i+1<<": ";
		cin>>arr[i];
	}
	
	int min = arr[0];
	for(int j=1;j<size;j++){
		if(arr[j]<min){
			min = arr[j];
		}
	}
	cout << "The Minimum element in the array is: " << min << endl;
	return 0;
}
