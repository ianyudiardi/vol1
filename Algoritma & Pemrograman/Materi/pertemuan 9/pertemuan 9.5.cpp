#include <iostream>
using namespace std;

int main(){
	int a[2][3];
	
	for(int i=0; i<2; i++){
		for(int j=0; j<3; j++){
			cout<<"Inputkan nilai index ke - ["<<i<<"]["<<j<<"]: ";
			cin>>a[i][j];
		}
	}
	
	cout<<"nilai matrix 2x3"<<endl;
	for(int i=0; i<2; i++){
		cout<<endl;
		for(int j=0; j<3; j++){
			cout<<a[i][j]<<" ";
		}
	}
}
