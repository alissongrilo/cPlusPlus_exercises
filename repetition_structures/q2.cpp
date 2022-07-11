#include <iostream>
using namespace std;

int main(){
	int matricula = 1, maiorNota_matricula, segundaMaior_matricula, auxMatricula; 
	float nota, maiorNota, segundaMaior, auxNota;
	
	cin>>maiorNota_matricula>>maiorNota;
	cin>>segundaMaior_matricula>>segundaMaior;
	
	if (maiorNota < segundaMaior){
		auxNota = maiorNota;
		maiorNota = segundaMaior;
		segundaMaior = auxNota;
		
		auxMatricula = maiorNota_matricula;
		maiorNota_matricula = segundaMaior_matricula;
		segundaMaior_matricula = auxMatricula;
	}
	
	while (matricula != 0){
		cin>>matricula;
		
		if (matricula != 0){
			cin>>nota;		
			if (nota >= maiorNota){
				segundaMaior = maiorNota;
				segundaMaior_matricula = maiorNota_matricula;
				
				maiorNota = nota;
				maiorNota_matricula = matricula;
			}
		}
	}
	
	cout<<maiorNota_matricula<<" "<<maiorNota<<endl;
	cout<<segundaMaior_matricula<<" "<<segundaMaior<<endl;
	
	return 0;
}
