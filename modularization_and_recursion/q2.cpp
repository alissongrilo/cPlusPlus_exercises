#include <iostream>
using namespace std;

void retornaMes(int mes){
	if (mes == 1){
		cout<<"janeiro"<<endl;
	} else if (mes == 2){
		cout<<"fevereiro"<<endl;
	} else if (mes == 3){
		cout<<"marco"<<endl;
	} else if (mes == 4){
		cout<<"abril"<<endl;
	} else if (mes == 5){
		cout<<"maio"<<endl;
	} else if (mes == 6){
		cout<<"junho"<<endl;
	} else if (mes == 7){
		cout<<"julho"<<endl;
	}else if (mes == 8){
		cout<<"agosto"<<endl;
	} else if (mes == 9){
		cout<<"setembro"<<endl;
	} else if (mes == 10){
		cout<<"outubro"<<endl;
	} else if (mes == 11){
		cout<<"novembro"<<endl;
	} else if (mes == 12){
		cout<<"dezembro"<<endl;
	} else {
		cout<<"erro"<<endl;
	}
}


int main(){
	int mes;
	cin>>mes;
	retornaMes(mes);
	return 0;
}
