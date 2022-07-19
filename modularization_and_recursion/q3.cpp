#include <iostream>
#include <string.h>
using namespace std;

float metroPara_centimetro(float distancia){
	return distancia * 100.0;
}

float centimetroPara_metro(float distancia){
	return distancia / 100.0;
}


int main(){
	float distancia;
	string unidade;
	
	cin>>distancia>>unidade;
	if (unidade == "centimetro"){
		cout<<metroPara_centimetro(distancia)<<" cm"<<endl;
	} else if (unidade == "metro"){
		cout<<centimetroPara_metro(distancia)<<" m"<<endl;
	} else {
		cout<<"ERRO"<<endl;
	}

	return 0;
}
