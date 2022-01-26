//C++ Program to perform matrix Subtraction

#include<iostream>
using namespace std;

int main(){
	int A[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int B[3][3] = {{10,11,12},{13,14,15},{16,17,18}};
	int C[3][3];
	
	//Performing matrix Subtraction
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			C[i][j] = B[i][j] - A[i][j];
		}
	}
	
	//Displaying All Matrices
	cout << "Matrix A: "<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout << A[i][j] <<" ";
		}
		cout << endl;
	}
	
	cout << "Matrix B: "<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout << B[i][j] <<" ";
		}
		cout << endl;
	}
	
	cout << "Matrix B-A: "<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout << C[i][j] <<" ";
		}
		cout << endl;
	}
	return 0;
}
