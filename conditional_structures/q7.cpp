#include <iostream>
using namespace std;

int contadorPar(int qtdPar, int n1, int n2, int n3, int n4, int n5){
	if (n1 % 2 == 0)
		qtdPar++;
	
	if (n2 % 2 == 0)
		qtdPar++;
	
	if (n3 % 2 == 0)
		qtdPar++;
		
	if (n4 % 2 == 0)
		qtdPar++;
		
	if (n5 % 2 == 0)
		qtdPar++;
	
	return qtdPar;
}

int main(){
	int N, n1, n2, n3, n4, n5, aux, qtdPar = 0;
	
	cin>>N;
	
	n1 = N / 10000;
	
	aux = N / 1000;
	n2 = aux % 10;
	
	aux = N / 100;
	n3 = aux % 100;
	
	aux = N / 10;
	n4 = aux % 1000;
	
	n5 = N % 10000;
	
	qtdPar = contadorPar(qtdPar, n1, n2, n3, n4, n5);
	cout<<qtdPar<<endl<<5-qtdPar<<endl;
	
	return 0;
}
