#include <iostream>
using namespace std;

int main(){
	int i;
	//for loop
	for(i = 1; i<=10; i++){
		cout<<"this cannot continue"<<endl;
	}
	//while loop
	i = 1;
	while(true){
		cout<<"Repeat"<<endl;
		i++;
	}
	/*do while, do while akan
	setidaknya berjalan sekali karena action dibaca duluan,
	while tergantung syaratnya karena
	syarat dibaca duluan*/
	i = 1;
	do{
		cout<<"This effect will resolve at least once"<<endl;
	}
	while (i<0);
	
	return 0;
}
