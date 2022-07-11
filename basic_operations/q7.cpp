#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
	float velocidadeCar, derrapagem;
	
	cin>>derrapagem;
	
	
	velocidadeCar = 14.6 * sqrt(derrapagem);
	
	cout<<fixed<<setprecision(3)<<velocidadeCar<<endl;
	
	return 0;
}
