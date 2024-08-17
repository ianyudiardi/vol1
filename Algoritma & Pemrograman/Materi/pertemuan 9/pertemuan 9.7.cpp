#include <iostream>
using namespace std;

int main(){
	string data[3][3];
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			if(j==0){
				cout<<"Nama Mahasiswa: ";
				cin>>data[i][j];
			}else if(j==1){
				cout<<"Nilai UTS: ";
				cin>>data[i][j];
			}else if(j==2){
				cout<<"Nilai UAS: ";
				cin>>data[i][j];
			}
		}
	}
	
	cout<<"Nama		UTS		UAS"<<endl;
	for(int i=0; i<3; i++){
		cout<<endl;
		for(int j=0; j<3; j++){
			cout<<data[i][j]<<"		";
		}
	}
}
