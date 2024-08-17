#include <iostream>
using namespace std;

int main(){
	int data[5]{20,37,42,77,89};
	int cari, ditemukan=0;
	
	cout<<"Data Array"<<endl;
	for(int i=0; i<5; i++){
		cout<<data[i]<<" ";
	}
	cout<<endl;
	
	cout<<"Masukkan nilai yang anda cari: ";
	cin>>cari;
	
	for (int i=0; i<5; i++){
		if(data[i]==cari){
			ditemukan = 1;
			cout<<"Data yang anda cari ada pada index ke data "<<i+1;
			break;
		}
	}
	
	if(ditemukan==0){
		cout<<"Nilai yang dicari tidak ditemukan"<<endl;
	}
}
