// C++ Program to calculate the distance between two points if their co-ordinates are given

#include<iostream>
#include<math.h>
using namespace std;

int main(){
	float x1,y1,x2,y2,dist;
	cout << "Enter the co-ordinates of first point: "<<endl;
	cin >> x1>>y1;
	cout << "Enter the co-ordinates of second point: "<<endl;
	cin >> x2,y2;
	dist = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	cout << "Distance between given two points is: "<<dist<<endl;
	return 0;
}
