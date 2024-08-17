#include <iostream>
using namespace std;

int main(){
	float panjang, lebar, luas, keliling;
	int x;
	cout<<"Pilih Penghitungan"<<endl;
	cout<<">[1]Luas"<<endl;
	cout<<">[2]Keliling"<<endl;
	cin>>x;
	
	if(x==1){
		cout<<"Masukkan Panjang: ";
		cin>>panjang;
		cout<<"Masukkan Lebar: ";
		cin>>lebar;
		cout<<"Luas = "<<panjang*lebar<<endl;
	}
	else if(x==2){
		cout<<"Masukkan Panjang: ";
		cin>>panjang;
		cout<<"Masukkan Lebar: ";
		cin>>lebar;
		cout<<"Keliling = "<<(2*panjang)+(2*lebar)<<endl;
	}
	else cout<<"ERROR"<<endl;
	
	return 0;
}
