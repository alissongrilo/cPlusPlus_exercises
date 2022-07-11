#include <iostream>
#include <string>
using namespace std;

int main(){
	string cor1, cor2;
	
	cin>>cor1>>cor2;
	
	if ((cor1 == "azul" and cor2 == "amarelo") or (cor2 == "azul" and cor1 == "amarelo"))
		cout<<"verde"<<endl;
	else if ((cor1 == "azul" and cor2 == "vermelho") or (cor2 == "azul" and cor1 == "vermelho"))
		cout<<"violeta"<<endl;
	else if ((cor1 == "vermelho" and cor2 == "amarelo") or (cor2 == "vermelho" and cor1 == "amarelo"))
		cout<<"laranja"<<endl;
	else if (cor1 == cor2)
		cout<<cor1<<endl;

	return 0;
}
