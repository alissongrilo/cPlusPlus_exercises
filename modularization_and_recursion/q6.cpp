#include <iostream>
using namespace std;

int simplifica(int n){
	int i = 1, resultado, divisores = 0;
	
	while (i < n){
		if (n % i == 0){
			resultado = i;
			divisores += 1;
		}
		i++;
	}
	
	//Verifica se o numero informado
	//é primo, sendo impossivel simplificar
	if (divisores == 1)
		return n;
	else	
		return resultado;
}

int main(){
	int numerador, denominador;
	
	cin>>numerador>>denominador;
	
	cout<<simplifica(numerador)<<endl;
	cout<<simplifica(denominador)<<endl;
	
	return 0;
}
