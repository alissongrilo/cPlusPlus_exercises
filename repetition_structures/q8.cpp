#include <iostream>
using namespace std;

int main(){
	int numero, i = 0;
	int primeiroMaior, segundoMaior, soma = 0;
	
	cin>>numero;
	primeiroMaior = numero;
	soma += numero;
	
	cin>>numero;
	segundoMaior = numero;
	soma += numero;
	
	while (i < 5){
		cin>>numero;
		soma += numero;
		
		if (numero > primeiroMaior){
			segundoMaior = primeiroMaior;
			primeiroMaior = numero;
		} else if (numero > segundoMaior and numero < primeiroMaior){
			segundoMaior = numero;
		}
		
		i++;
	}
	
	
	cout<<primeiroMaior<<endl<<segundoMaior<<endl;
	cout<<(soma - primeiroMaior - segundoMaior) / 5;
	
	return 0;
}
