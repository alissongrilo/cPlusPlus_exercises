#include <iostream>
using namespace std;

int main(){
	float notaMatematica, notaNatureza, notaLinguagem, notaRedacao, notaHumanas, media;
	
	cin>>notaMatematica>>notaNatureza>>notaLinguagem>>notaRedacao>>notaHumanas;
	
	if (notaRedacao < 200){
		cout<<"-1"<<endl;
	}else {
		media = (notaMatematica * 3) + (notaNatureza * 2) + (notaLinguagem * 2) + (notaRedacao * 2) + (notaHumanas * 1);
		cout<<media/10<<endl;
	}
	
	return 0;
}
