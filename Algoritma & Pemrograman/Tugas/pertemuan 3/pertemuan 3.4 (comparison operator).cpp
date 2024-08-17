#include <iostream>
using namespace std;

int main(){
	int a=4, b=3;
	bool hasil;
	string x;
	if (hasil==true){
		x="Benar";		
	} else {x="Salah";
	}	 		
	cout<<"a= "<<a<<" b= "<<b<<endl;
	
	hasil = a > b;
	cout<<"a > b= "<<x<<endl;

	hasil = a < b;
	cout<<"a < b= "<<x<<endl;
	
	hasil = a >= b;
	cout<<"a > b= "<<x<<endl;
	
	hasil = a <= b;
	cout<<"a <= b= "<<x<<endl;
	
	hasil = a == b;
	cout<<"a == b= "<<x<<endl;
	
	hasil = a != b;
	cout<<"a != b= "<<x<<endl;
	
	return 0;
}
