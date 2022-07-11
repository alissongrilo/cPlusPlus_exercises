#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float altDegrau, altFinal;
	int qtdDegrau;
	
	cin>>altDegrau>>altFinal;
	
	//Convertendo altura do degrau para Metros
	altDegrau = altDegrau * 0.01; 
	
	qtdDegrau = ceil(altFinal / altDegrau);
	
	cout<<qtdDegrau<<endl;
	
	return 0;
}
