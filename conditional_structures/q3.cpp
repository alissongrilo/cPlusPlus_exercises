#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	float saldoMedio;
	
	cin>>saldoMedio;
	cout<<saldoMedio<<endl;
	
	if (saldoMedio >= 1600){
		cout<<fixed<<setprecision(2)<<saldoMedio * 0.30;
	} else if (saldoMedio >= 800){
		cout<<fixed<<setprecision(2)<<saldoMedio * 0.25;
	} else if (saldoMedio >= 400){
		cout<<fixed<<setprecision(2)<<saldoMedio * 0.20;
	} else if (saldoMedio >= 200){
		cout<<fixed<<setprecision(2)<<saldoMedio * 0.15;
	} else if (saldoMedio >= 0){
		cout<<fixed<<setprecision(2)<<saldoMedio * 0.10;
	} else {
		cout<<"0"<<endl;
	}
	
	return 0;
}
