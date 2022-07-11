#include <iostream>
using namespace std;

int main(){
	int matricula, notaFinal, compromisso;
	
	cin>>matricula>>notaFinal>>compromisso;
	
	if (notaFinal >= 60 and compromisso >=75){
		cout<<matricula % 100000<<"A"<<endl;
	} else if (notaFinal >= 70 and compromisso >= 65){
		cout<<matricula % 100000<<"A"<<endl;
	} else {
		cout<<matricula % 100000<<"R"<<endl;
	}
	
	return 0;
}
