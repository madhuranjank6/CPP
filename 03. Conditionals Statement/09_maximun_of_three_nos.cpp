// C++ program to find maximum of three numbers using nested if-else

#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	cout << "Enter Three Numbers: "<<endl;
	cin >> a >> b >> c;
	if(a>b && a>c){
		cout << a <<" is Greater" <<endl;
	}else{
		if(b>c){
			cout << b <<" is Greater" << endl;
		}else{
			cout << c <<" is Greater" << endl;
		}
	}
	return 0;
}
