#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	float salarioDolar, salarioLibra, salarioReal, salarioEuro;
	
	cin>>salarioReal;
	
	salarioDolar = salarioReal / 2.13;
	salarioEuro = salarioReal / 2.84;
	salarioLibra = salarioReal / 3.34;
	
	cout<<fixed<<setprecision(2)<<salarioDolar<<endl;
	cout<<fixed<<setprecision(2)<<salarioEuro<<endl;
	cout<<fixed<<setprecision(2)<<salarioLibra<<endl;
	
	return 0;
}
