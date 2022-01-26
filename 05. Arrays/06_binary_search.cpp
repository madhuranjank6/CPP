//C++ Program to implement Binary Search

#include<iostream>
using namespace std;

int main(){
	
	//Logic to take array as input from user
	int size;
	cout << "Enter the size of the array: " << endl;
	cin >> size;
	int arr[size];
	cout << "Please Enter the array elements in Ascending Order" << endl;
	for(int i=0;i<size;i++){
		cout << "Enter the element at position "<<i+1<<": ";
		cin>>arr[i];
	}
	
	int key;
	cout << "Enter the element to search: "<<endl;
	cin >> key;
	//Binary Search Logic
	int low = 0;
	int high = size;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]==key){
			cout << key <<" is Found at Index "<<mid<<endl;
			return 0;
		}
		else if(arr[mid]>key){
			high = mid-1;
		}
		else{
			low = mid + 1;
		}
	}
	cout << key << " is Not Found in the array" << endl;
	
	return 0;
}
