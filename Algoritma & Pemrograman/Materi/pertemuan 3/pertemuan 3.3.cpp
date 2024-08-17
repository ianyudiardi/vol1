#include <iostream>
using namespace std;

int main(){
	int a=5, b=10;
	cout<<"A= "<<a<<" B= "<<endl;
	
	b+=a; //b=b+a
	cout<<"b+=a = "<<b<<endl;
	
	a=5, b=10;
	b-=a; //b=b-a
	cout<<"b-=a = "<<b<<endl;
	
	a=5, b=10;
	b*=a; //b=b*a
	cout<<"b*=a = "<<b<<endl;
	
	a=5, b=10;
	b/=a; //b=b/a
	cout<<"b/=a = "<<b<<endl;
	
	a=5, b=10;
	b%=a; //b=b%a
	cout<<"b%=a = "<<b<<endl;
	
	return 0;
}
