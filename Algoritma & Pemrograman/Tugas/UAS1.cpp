#include <iostream>
using namespace std;

int checkout[];
bool id = true;
int main(){
	int menu, choice;
	string makanan;
	cout<<"Selamat datang di aplikasi"<<endl;
	cout<<"Silahkan pilih menu"<<endl;
	cout<<"[1] Makanan"<<endl;
	cout<<"[2] Minuman"<<endl;
	cin>>menu;
	
	switch(menu){
		case 1:
			while(id = true){
				cout<<"Silahkan pilih makanan"<<endl;
				cout<<"Pizza - Rp.60.000"<<endl;
				cout<<"Burger - Rp.18.000"<<endl;
				cout<<"Pasta - Rp.25.000"<<endl;
				cin>>makanan;
			}
	}
}
