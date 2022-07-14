#include <iostream>
using namespace std;

void imprimeVetor(char v[], int qtdQuestao){
	int i = 0;
	while (i < qtdQuestao){
		cout<<v[i]<<endl;
		i++;
	}
}


char respostaCerta(int resposta, int preto, int branco){
	if (preto == 1 and branco == 4){
		if (resposta == 1){
			return 'A';
		} else if (resposta == 2){
			return 'B';
		} else if (resposta == 3){
			return 'C';
		} else if (resposta == 4){
			return 'D';
		} else if (resposta == 5){
			return 'E';
		}  
	} else {
		return '*';
	}
	return 0;
}


char retornaAlternativa(int qtdQuestao){
	int i = 0, j = 1, valores, preto, branco, resposta;
	char v[qtdQuestao];
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
			
			//Verifica as 5 alternativas foram informadas
			//e se houve apenas 1 valor preto e 4 brancos
			if (j == 5){
				v[i] = respostaCerta(resposta, preto, branco);
			}
			
			j++;
		}
		i++;
	}
	
	imprimeVetor(v, qtdQuestao);
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
