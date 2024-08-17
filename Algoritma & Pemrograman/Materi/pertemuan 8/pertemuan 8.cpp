#include <iostream>
using namespace std;


void contoh1(){
	int nilai[5]; //array kosong
	
	//mengisi array
	nilai[0]=32;
	nilai[1]=42;
	nilai[2]=76;
	nilai[3]=32;
	nilai[4]=57;
	
	//printing
	cout<<"Nilai ke-1: "<<nilai[0]<<endl;
	cout<<"Nilai ke-2: "<<nilai[1]<<endl;
	cout<<"Nilai ke-3: "<<nilai[2]<<endl;
	cout<<"Nilai ke-4: "<<nilai[3]<<endl;
	cout<<"Nilai ke-5: "<<nilai[4]<<endl;
}

void contoh2(){
	//membuat dan mengisi array
	int nilai[5]={32,42,76,31,57};
	
	//printing
	cout<<"Nilai ke-1: "<<nilai[0]<<endl;
	cout<<"Nilai ke-2: "<<nilai[1]<<endl;
	cout<<"Nilai ke-3: "<<nilai[2]<<endl;
	cout<<"Nilai ke-4: "<<nilai[3]<<endl;
	cout<<"Nilai ke-5: "<<nilai[4]<<endl;
}

void contoh3(){
	//membuat dan mengisi array
	int nilai[5]={32,42,76,31,57};
	
	//printing
	for(int i=0; i<=4; i++){
		cout<<"Nilai ke-"<<i+1<<": "<<nilai[i]<<endl;
	}
}

void contoh4(){
	char huruf[5]={'a','b','c','d','e'};
	
	//printing
	for(int i=0; i<=4; i++){
		cout<<"Nilai ke-"<<i+1<<": "<<nilai[i]<<endl;
	}
}

void contoh5(){
	string buah[5]={"apel","jeruk","jambu","durian","mangga"};
	
	//printing
	for(int i=0; i<=4; i++){
		cout<<"Nilai ke-"<<i+1<<": "<<nilai[i]<<endl;
	}
}

void contoh6(){
	int i, n;
	cout<<"Input banyak nilai = ";
	cin>>n;
	int nilai[n]; //array kosong
	
	//menyimpan nilai ke array
	for(int i=0 i<n; i++){
		cout<<"Input nilai ke "<<i+1<<" = ";
		cin>>nilai[i]
	}
	
	//printing
	for(i=0; i<n; i++){
		cout<<"Nilai ke "<<i+1<<" = "<<nilai[i]<<endl;
	}
}

void contoh7(){
	int i, n, jumlah=0, terkecil, terbesar;
	cout<<"Input banyak nilai = ";
	cin>>n;
	int nilai[n]; //array kosong
	
	
	for(int i=0 i<n; i++){
		cout<<"Input nilai ke "<<i+1<<" = ";
		cin>>nilai[i]
		jumlah = jumlah + nilai[i]
	}
}

int main(){
	contoh1();
	
	return 0;
}

