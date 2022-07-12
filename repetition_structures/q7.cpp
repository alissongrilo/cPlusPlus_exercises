#include <iostream>
using namespace std;

float calculaMedia(float somaAltura, int qtdPessoas){
	return somaAltura / qtdPessoas;
}

float calculaAltura_maior(float altura, float maiorAltura){
	if (altura > maiorAltura){
		return altura;
	} else {
		return maiorAltura;
	}
	
	return 0;
}

float calculaAltura_menor(float altura, float menorAltura){
	if (altura < menorAltura){
		return altura;
	} else {
		return menorAltura;
	}
	
	return 0;
}

int main(){
	int i = 0, qtdHomem = 0, qtdMulher = 0;
	int qtdFichas;
	float altura, maiorAltura = 0, menorAltura = 3;
	float somaAltura = 0, somaAlturaHomem = 0, somaAlturaMulher = 0;
	char genero;
	
	cin>>qtdFichas;
	
	while (qtdFichas > i){
		cin>>altura>>genero;
		
		maiorAltura = calculaAltura_maior(altura, maiorAltura);
		menorAltura = calculaAltura_menor(altura, menorAltura);
		
		if (genero == 'f'){
			somaAlturaMulher += altura;
			qtdMulher++;
		} else if (genero == 'm'){
			somaAlturaHomem += altura;
			qtdHomem++;
		}
		
		somaAltura += altura;
		
		i ++;
	}

	cout<<maiorAltura<<endl<<menorAltura<<endl;
	
	if (qtdMulher != 0){
		cout<<calculaMedia(somaAlturaMulher, qtdMulher)<<endl;
	} else {
		cout<<"erro"<<endl;
	}
	
	if (qtdHomem != 0){
		cout<<calculaMedia(somaAlturaHomem, qtdHomem)<<endl;
	} else {
		cout<<"erro"<<endl;
	}
	
	cout<<calculaMedia(somaAltura, qtdFichas)<<endl;
	
	return 0;
}
