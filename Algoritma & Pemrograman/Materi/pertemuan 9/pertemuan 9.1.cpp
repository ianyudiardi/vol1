#include <iostream>
using namespace std;

int main(){
	//initiate array 2 dimensi
	int a[2][3];
	
	//mengisi array
	a[0][0] = 5;
	a[0][1] = 10;
	a[0][2] = 15;
	a[1][0] = 20;
	a[1][1] = 25;
	a[1][2] = 30;
	
	cout<<"Nilai index ke - [0][0] = "<<a[0][0]<<endl;
	cout<<"Nilai index ke - [0][1] = "<<a[0][1]<<endl;
	cout<<"Nilai index ke - [0][2] = "<<a[0][2]<<endl;
	cout<<"Nilai index ke - [1][0] = "<<a[1][0]<<endl;
	cout<<"Nilai index ke - [1][1] = "<<a[1][1]<<endl;
	cout<<"Nilai index ke - [1][2] = "<<a[1][2]<<endl;
}
