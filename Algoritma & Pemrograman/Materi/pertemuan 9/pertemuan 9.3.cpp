#include <iostream>
using namespace std;

int main(){
	int a[2][3] = {{5,10,15},{20,25,30}};
	
	for (int i=0; i<2; i++){
		for(int j=0; j<3; j++){
			cout<<"Nilai index ke - ["<<i<<"]["<<j<<"]: "<<a[i][j]<<endl;
		}
	}
}
