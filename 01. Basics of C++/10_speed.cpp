// C++ program to calculate the speed when initial and final velocities and acceleration is given

#include<iostream>
using namespace std;

int main(){
	float u,v,a,speed;
	cout << "Enter the Initial Velocity: "<<endl;
	cin >> u;
	cout << "Enter the final Velocity: "<<endl;
	cin >> v;
	cout << "Enter the acceleration: " << endl;
	cin >> a;
	speed = (v*v - u*u)/(2*a);
	cout << "Speed is = " <<speed << endl;
	return 0;
}
