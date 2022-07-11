#include <iostream>
using namespace std;

bool testaDivisao(int x){
	if (x == 0){
		return 1;
	}
	return 0;
}

int main(){
	int numerador, denominador;
	
	cin>>numerador>>denominador;
	
	if (testaDivisao(denominador) == 1){
		cout<<"erro"<<endl;
	} else {
		cout<<numerador / denominador<<endl;
		cout<<numerador % denominador<<endl;
	}
	
	return 0;
}
