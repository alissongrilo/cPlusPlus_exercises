#include <iostream>
#include <math.h>
using namespace std;

int main(){
	unsigned int qtdProduto;
	float prodLuxo, prodNormal;
	
	cin>>qtdProduto;
	
	prodNormal = (qtdProduto / 3.0) * 2;
	cout<<ceil(prodNormal)<<endl;
	
	prodLuxo = qtdProduto - prodNormal;
	
	cout<<floor(prodLuxo);
	 
	return 0;
}
