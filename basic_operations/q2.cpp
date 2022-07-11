#include <iostream>
using namespace std;

int main(){
	float salarioMin, salarioLiquido, salarioBruto, valorHora;
	int qtdHora;
	
	cin>>salarioMin;
	cin>>qtdHora;
	
	valorHora = salarioMin * 0.05;
	salarioBruto = qtdHora * valorHora;
	salarioLiquido = salarioBruto - (salarioBruto * 0.23);
	
	cout<<salarioLiquido<<endl;
	 
	return 0;
}
