#include <iostream>
using namespace std;

int main(){
	int data[10]{20,37,42,20,89,20,37,11,77,92};
	int cari, ditemukan = 0, hasilcari[10];
	cout<<"Data Array:"<<endl;
	for(int i=0; i<10; i++){
		cout<<data[i]<<" ";
	}
	cout<<endl;
	
	cout<<"Masukkan nilai yang dicari ";
	cin>>cari;
	for(int i=0; i<10; i++){
		if(data[i]==cari){
			ditemukan++;
			hasilcari[ditemukan]=i;
		}
	}
	if(ditemukan==0){
		cout<<"Nilai yang dicari tidak dapat ditemukan"<<endl;
	}
	else{
	cout<<"Nilai yang dicari terdapat pada data ke: "<<endl;
	for(int i=1; i<=ditemukan; i++){
		cout<<hasilcari[i]+1<<" ";
	}	
	}
}
