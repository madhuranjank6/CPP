// C++ Program to create and display an array

#include<iostream>
using namespace std;

int main(){
	//Different ways to declare and initialize and array
	int A[5]; //All the elements will be initialized by some random integer values
	int B[5] = {1,2,3,4,5}; //Declaraton and Initialization
	char C[] = {'A','B','C'}; //Here size of the array will be decided on the basis of number of elements
	int D[5]; //Declaration only
	
	//Initializing array D
	D[0] = 6;
	D[1] = 7;
	D[2] = 8;
	D[3] = 9;
	D[4] = 10;
	
	//Printing Arrays using for loop
	cout << "Elements of Array A are: ";
	for(int i=0;i<5;i++){
		cout<<A[i]<<" ";
	}
	cout << "\nElements of Array B are: ";
	for(int i=0;i<5;i++){
		cout<<B[i]<<" ";
	}
	cout << "\nElements of Array C are: ";
	for(int i=0;i<3;i++){
		cout<<C[i]<<" ";
	}
	cout << "\nElements of Array D are: ";
	for(int i=0;i<5;i++){
		cout<<D[i]<<" ";
	}
	return 0;
}
