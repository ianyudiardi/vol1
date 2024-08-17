#include <iostream>
using namespace std;

int main(){
	float pi=3.14, luas, keliling, r;
	int x;
	cout<<"Pilih Penghitungan"<<endl;
	cout<<">[1]Luas"<<endl;
	cout<<">[2]Keliling"<<endl;
	cin>>x;
	
	if(x==1){
		cout<<"Masukkan Jari-Jari"<<endl;
		cin>>r;
		cout<<"Luas = "<<pi*r*r<<endl;
	}
	else if (x==2){
		cout<<"Masukkan Jari-Jari"<<endl;
		cin>>r;
		cout<<"Keliling = "<<pi*2*r<<endl;
	}
	else cout<<"ERROR"<<endl;
	
	return 0;
}
