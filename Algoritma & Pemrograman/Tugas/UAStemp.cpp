#include <iostream>

using namespace std;

int main(){
	int menu;
	bool cek = false;
	cout << "Mau pesan berapa menu? ";
	cin >> menu;
	int counter = 0;
	string cek2, arrayMakanan[menu],makanan;
	while(not cek){	
		cout << "Pilih makanan: ";
		cin >> makanan;
		arrayMakanan[counter] = makanan;
		counter = counter + 1;
		cout << "Apakah mau pesan lagi? ";
		cin >> cek2;
		if (cek2 == "n" and cek2 == "N"){
			cek = true;
			break;
		} else {
			continue;
		}
	}
	for (int i = 0; i < menu; i++){
		cout << arrayMakanan[i] << endl;
	}
}
