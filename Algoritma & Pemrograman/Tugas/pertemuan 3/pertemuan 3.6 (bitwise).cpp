#include <iostream>
using namespace std;

int main (){
	int a = 6, b = 3, hasil;
	
	//bitwise AND
	hasil = a & b;
	cout<<"a & b = "<<hasil<<endl;
	
	//bitwise OR
	hasil = a | b;
	cout<<"a | b = "<<hasil<<endl;
	
	//bitwise xor
	hasil = a ^ b;
	cout<<"a ^ b = "<<hasil<<endl;
	
	//bitwise not
	hasil = ~a;
	cout<<"~a = "<<hasil<<endl;
	
	//bitwise left shift
	hasil = a << 1;
	cout<<"a << 1 = "<<hasil<<endl;
	
	//bitwise right shft
	hasil = a >> 1;
	cout<<"a >> 1 = "<<hasil<<endl;
	
	return 0;
}
