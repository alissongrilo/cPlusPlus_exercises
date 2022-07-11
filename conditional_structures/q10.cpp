#include <iostream>
using namespace std;

double calcula(double a, double b, int op){
	switch (op){
		case 1:
			return (a + b) / 2;
			break;
		case 2:
			if (a > b){
				return a - b;
			} else {
				return b - a;
			}
			break;
		case 3:
			return a * b;
			break;
		case 4:
			return a / b;
			break;
	}
	return 0;
}

int main(){
	double a, b, resultado;
	int op;
	
	cin>>a>>b>>op;
	
	if (b == 0 or op <= 0 or op > 4){
		cout<<"ERRO";
	} else {
		resultado = calcula(a, b, op);
		cout<<resultado<<endl;
	}
	
	return 0;
}
