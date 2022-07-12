#include <iostream>
using namespace std;

int main(){
	int qtdSequencia,  i = 2;
	int fib1 = 0, fib2 = 1, fib = 1, aux;
	
	cin>>qtdSequencia;
	
	if (qtdSequencia == 1){
		cout<<fib1<<endl;
	} else if (qtdSequencia == 2){
		cout<<fib1<<endl<<fib2<<endl;
	} else {
		cout<<fib1<<endl<<fib2<<endl;
		while (i < qtdSequencia){
			aux = fib1;
			fib1 = fib;
			fib2 = aux;
			
			fib = fib2 + fib1;
			cout<<fib<<endl;
			
			i++;
		}
	}
	return 0;
}
