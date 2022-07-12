#include <iostream>
using namespace std;

char retornaLetra(int numero){
	if (numero == 1){
		return 'a';
	} else if (numero == 2){
		return 'b';
	} else if (numero == 3){
		return 'c';
	} else if (numero == 4){
		return 'd';
	} else if (numero == 5){
		return 'e';
	} else if (numero == 6){
		return 'f';
	} else if (numero == 7){
		return 'g';
	} else if (numero == 8){
		return 'h';
	} else if (numero == 9){
		return 'i';
	} else if (numero == 10){
		return 'j';
	} else if (numero == 11){
		return 'k';
	} else if (numero == 12){
		return 'l';
	} else if (numero == 13){
		return 'm';
	} else if (numero == 14){
		return 'n';
	} else if (numero == 15){
		return 'o';
	} else if (numero == 16){
		return 'p';
	} else if (numero == 17){
		return 'q';
	} else if (numero == 18){
		return 'r';
	} else if (numero == 19){
		return 's';
	} else if (numero == 20){
		return 't';
	} else if (numero == 21){
		return 'u';
	} else if (numero == 22){
		return 'v';
	} else if (numero == 23){
		return 'w';
	} else if (numero == 24){
		return 'x';
	} else if (numero == 25){
		return 'y';
	} else if (numero == 26){
		return 'z';
	}
	return 0;
}


int main(){
	int linhas, numeros, i = 1;
	char letra;
	
	cin>>linhas;
	
	while (i <= linhas){
		numeros = 1;
		while (numeros <= i){
			letra = retornaLetra(numeros);
			cout<<letra<<" ";
			numeros += 1;
		}
		
		cout<<endl;
		i++;	
	}
	return 0;
}
