#include <iostream>
using namespace std;

int main (){
	int panjang, lebar;
	
	cout<<"Masukkan Panjang = ";;
	cin>>panjang;
	cout<<"Masukkan Lebar = ";;
	cin>>lebar;
	
	cout<<"Luas = "<<panjang*lebar<<endl;
	cout<<"Keliling = "<<(2*panjang)+(2*lebar);
	
	return 0;
}
