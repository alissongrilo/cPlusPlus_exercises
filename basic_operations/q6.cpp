#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int qtdHomem;
	float qtdCaravela = 0;
	
	cin>>qtdHomem;
	
	if (qtdHomem <= 1000){
		cout<<qtdCaravela;
	} else{
		qtdCaravela = ceil((qtdHomem - 1000.0) / 80);
		cout<<qtdCaravela<<endl;
	}
	return 0;
}
