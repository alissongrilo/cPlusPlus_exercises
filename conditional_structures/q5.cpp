#include <iostream>
#include <iomanip>
using namespace std;

float calculaPreco(float peso, int codigo){
	float preco;
	
	if (codigo >= 1 and codigo <= 4)
		preco = peso * 10;
	else if (codigo >=5 and codigo <= 7)
		preco = peso * 25;
	else if (codigo >=8 and codigo <=10)
		preco = peso * 35;
	
	return preco;
}

float calculaImposto(float precoBruto, int codPais){
	float imposto;
	
	if (codPais == 1)
		imposto = 0;
	else if (codPais == 2)
		imposto = precoBruto * 0.15;
	else if (codPais == 3)
		imposto = precoBruto * 0.25;
	
	return imposto;	
}

int main(){
	int codProd, paisOrigem;
	float pesoProd, precoBruto, precoTotal, imposto;
	
	cin>>codProd>>pesoProd>>paisOrigem;
	
	pesoProd = pesoProd * 1000; //Convertendo para Gramas
	precoBruto = calculaPreco(pesoProd, codProd);
	imposto = calculaImposto(precoBruto, paisOrigem);
	precoTotal = precoBruto + imposto;

	cout<<fixed<<setprecision(1)<<pesoProd<<endl;
	cout<<fixed<<setprecision(1)<<precoBruto<<endl;
	cout<<fixed<<setprecision(1)<<imposto<<endl;
	cout<<fixed<<setprecision(1)<<precoTotal<<endl;
	
	return 0;
}
