#include <iostream>
using namespace std;

int main(){
	int a[2][3];
	int b[2][3];
	
	cout<<"Inputkan nilai matrix A: "<<endl;
	for(int i=0; i<2; i++){
		for(int j=0; j<3; j++){
			cout<<"Inputkan nilai index ke - ["<<i<<"]["<<j<<"]: ";
			cin>>a[i][j];
		}
	}
	
	cout<<"Inputkan nilai matrix B: "<<endl;
	for(int i=0; i<2; i++){
		for(int j=0; j<3; j++){
			cout<<"Inputkan nilai index ke - ["<<i<<"]["<<j<<"]: ";
			cin>>b[i][j];
		}
	}
	
	//display
	cout<<"nilai matrix A"<<endl;
	for(int i=0; i<2; i++){
		cout<<endl;
		for(int j=0; j<3; j++){
			cout<<a[i][j]<<" ";
		}
	}
	
	cout<<"nilai matrix B"<<endl;
	for(int i=0; i<2; i++){
		cout<<endl;
		for(int j=0; j<3; j++){
			cout<<b[i][j]<<" ";
		}
	}
	
	cout<<"nilai matrix A+B"<<endl;
	for(int i=0; i<2; i++){
		cout<<endl;
		for(int j=0; j<3; j++){
			cout<<a[i][j]+b[i][j]<<" ";
		}
	}
}

