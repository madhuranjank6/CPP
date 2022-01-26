//C++ Program to implement Linear Search

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
	
	int key;
	cout << "Enter the Element to search: " <<endl;
	cin >> key;
	for(int i=0;i<size;i++){
		if(arr[i]==key){
			cout << key <<" is found at index "<<i<<endl;
			return 0;
		}
	}
	cout << key << " is Not Found in the Array" << endl;
	return 0;
}
