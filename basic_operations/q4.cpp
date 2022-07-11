#include <iostream>

using namespace std;

int main(){
	float bMaior, bMenor, altTrap, areaTrap;
	
	cin>>bMaior;
	cin>>bMenor;
	cin>>altTrap;
	
	areaTrap = ((bMaior + bMenor) * altTrap) / 2;
	
	cout<<areaTrap<<endl;
	
	return 0;
}
