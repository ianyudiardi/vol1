#include <iostream>
using namespace std;

int main(){
	int a= 1; //true
	int b= 0; //false
	bool hasil;
	
	cout<<"a= "<<a<<endl;
	cout<<"b= "<<b<<endl;
	
	//Logika AND
	hasil= a&&b;
	cout<<"a&&b= "<<hasil<<endl; //false
	
	//logika OR
	hasil= a||b;
	cout<<"a||b= "<<hasil<<endl;
	
	//Logika NOT
	cout<<"!a= "<<!a<<endl;
}
