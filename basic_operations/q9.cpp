#include <iostream>

using namespace std;

int main(){
	
	int mili, horas, minutos, auxResto;
	float segundos;
	
	cin>>mili;
	
	horas = mili / 3600000;
	auxResto = mili % 3600000;
	
	minutos = auxResto / 60000;
	auxResto = auxResto % 60000;
	
	segundos = auxResto / 1000.0;
	
	cout<<horas<<" : "<<minutos<<" : "<<segundos<<endl;
	
	return 0;
}
