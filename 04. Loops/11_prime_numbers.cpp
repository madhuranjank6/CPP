// c++ program to check for prime numbers

//A number is Prime number if it is divisible by 1 and itself i.e, it will have only 2 factors

#include<iostream>
using namespace std;

int main(){
	int num,factors=0;
	cout << "Enter the number to check for prime: " << endl;
	cin >> num;
	for(int i=1;i<=num;i++){
		if(num%i==0){
			factors += 1;
		}
	}
	if(factors==2){
		cout << num << " is Prime Number" << endl;
	}else{
		cout << num <<" is Not a Prime Number" << endl;
	}
	return 0;
}
