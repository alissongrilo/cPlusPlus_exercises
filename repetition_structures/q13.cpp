#include <iostream>
using namespace std;

void respostaCerta(int resposta, int preto, int branco, int i){
	if (preto == 1 and branco == 4){
		if (resposta == 1){
			cout<<"A"<<endl;
		} else if (resposta == 2){
			cout<<"B"<<endl;
		} else if (resposta == 3){
			cout<<"C"<<endl;
		} else if (resposta == 4){
			cout<<"D"<<endl;
		} else if (resposta == 5){
			cout<<"E"<<endl;
		}  
	} else {
		cout<<"*"<<endl;
	}
}


char retornaAlternativa(int qtdQuestao){
	int i = 0, j = 1, valores, preto, branco, resposta;
	
	while (i < qtdQuestao){
		
		//Inicializacao de variaveis antes do laco
		//para resetar valores
		j = 1;
		preto = 0;
		branco = 0;
		while (j <= 5){
			cin>>valores;
			
			if (valores <= 127){
				preto += 1;
				resposta = j; 
				//resposta certa vai receber a posicao de j
				//j=1->A, j=2->B ...
			} else if (valores > 127){
				branco += 1;
			}
			
			//Verifica se houve apenas 1 valor preto e 4 brancos
			if (j == 5){
				respostaCerta(resposta, preto, branco, i);
			}
			
			j++;
		}
		i++;
	}
	return 0;
}


int main(){
	int qtdQuestao = 1;
	
	//Laço para ler quantas questoes o usuario deseja
	//ate que seja informado 0
	while (qtdQuestao != 0){
		cin>>qtdQuestao;
		cout<<retornaAlternativa(qtdQuestao);
	}
	
	return 0;
}
