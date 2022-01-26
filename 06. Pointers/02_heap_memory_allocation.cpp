//C++ program to allocate memory in heap using pointers

#include<iostream>
using namespace std;

int main(){
	int A[5] = {1,2,3,4,5}; //Memory will be allocated in heap
	int *p;
	p = new int[5]; //memory will be allocated in heap
	
	//Initializing the array in heap
	//Accessing elements in heap is possible only with the help of pointers
	p[0] = 6;
	p[1] = 7;
	p[2] = 8;
	p[3] = 9;
	p[4] = 10;
	
	//Printing the array in stack
	cout << "Stack Array: "<<endl;
	for(int i=0;i<5;i++){
		cout<<A[i]<<" ";
	}
	
	//Printing the heap array using pointers
	cout <<"\nHeap Array:"<<endl;
	for(int i=0;i<5;i++){
		cout<<p[i]<<" ";
	}
	return 0;
}
