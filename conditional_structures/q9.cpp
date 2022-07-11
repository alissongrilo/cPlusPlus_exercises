#include <iostream>
#include <cmath>
using namespace std;
 
double converteAngulo(double valorAngulo){
	valorAngulo = (M_PI/180) * valorAngulo;
	return valorAngulo;
}

double calculaAngulo(double valorAngulo, int op){
	if (valorAngulo > 360.0){
		valorAngulo = valorAngulo - 360;
	}
	
	switch (op){
		case 1:
			valorAngulo = sin(valorAngulo);
			return valorAngulo;
			break;
		case 2:
			valorAngulo = cos(valorAngulo);
			return valorAngulo;
			break;
	}
	return 0;
}


int main(){
	double valorAngulo, valorAngulo2;
	int op;
	
	cin>>op;
	
	switch (op){
		case 1:
			cin>>valorAngulo;
			valorAngulo = converteAngulo(valorAngulo);
			valorAngulo = calculaAngulo (valorAngulo, 1);
			cout<<valorAngulo;
			break;
		case 2:
			cin>>valorAngulo;
			valorAngulo = converteAngulo(valorAngulo);
			valorAngulo = calculaAngulo (valorAngulo, 2);
			cout<<valorAngulo;
			break;
		case 3:
			cin>>valorAngulo>>valorAngulo2;
			cout<<valorAngulo * valorAngulo2;
			break;
	}
	
	return 0;
}
