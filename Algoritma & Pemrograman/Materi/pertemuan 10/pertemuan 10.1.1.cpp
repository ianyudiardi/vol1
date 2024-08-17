#include <iostream>
using namespace std;

const float pi=3.14;
int x,y,z;
int persegi(int p, int l){
//	x = p*l;
	return p*l;
}

int lingkaran(int r){
//	const float pi = 3.14;
//	y = pi*r*r;
	return pi*r*r;
}

int segitiga(int a, int t){
//	z = a*t/2;
	return a*t/2;
}

int main(){
	int choice,p,l,x,r,a,t;
	cout<<"Selamat datang di Aplikasi hitung"<<endl;
	cout<<"Silahkan pilih bentuk"<<endl;
	cout<<"[1] Persegi panjang"<<endl;
	cout<<"[2] Lingkaran"<<endl;
	cout<<"[3] Segitiga"<<endl;
	cin>>choice;
	
	switch(choice){
		case 1:
			cout<<"Input panjang"<<endl;
			cin>>p;
			cout<<"Input lebar"<<endl;
			cin>>l;
// 			persegi(p,l);
			cout<<"Luas persegi adalah: "<<persegi(p,l)<<endl;
			break;
		case 2:
			cout<<"Input jari-jari"<<endl;
			cin>>r;
			cout<<"Luas lingkaran adalah: "<<lingkaran(r)<<endl;
			break;
		case 3:
			cout<<"Input alas"<<endl;
			cin>>a;
			cout<<"Input tinggi"<<endl;
			cin>>t;
			cout<<"Luas segitiga adalah: "<<segitiga(a,t)<<endl;
			break;
		default: cout<<"ERROR"<<endl;
	}
}
