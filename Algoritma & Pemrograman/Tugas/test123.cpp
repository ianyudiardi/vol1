#include <iostream>
using namespace std;

void funct();

int main(){
	funct();
}



void funct(){
	string buah[2][5] = {{"Nangka","Melon","Kelengkeng","Sawo","Rambutan"},{"Manis","Asam","Nangka","Melon","Kelengkeng"}};
	int Panjbuah = sizeof(buah[0]) / sizeof(buah[0][0]);
	for (int i = 0; i<Panjbuah;i++){
		for (int j = 0; j<Panjbuah; j++){
			cout << buah[i][j] << endl;
		}
		if (i = 1){
			break;
		}
	}
}
