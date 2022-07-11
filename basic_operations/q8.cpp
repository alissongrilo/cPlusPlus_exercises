#include <iostream>
using namespace std;

int main(){
	unsigned int valorNota;
	int auxResto;
	
	cin>>valorNota;
	
	cout<<valorNota / 100<<endl;
	
	auxResto = valorNota % 100;
	cout<<auxResto / 50<<endl;
	
	auxResto = auxResto % 50;
	cout<< auxResto / 20<<endl;
	
	auxResto = auxResto % 20;
	cout<< auxResto / 10<<endl;
	
	auxResto = auxResto % 10;
	cout<< auxResto / 5<<endl;
	
	auxResto = auxResto % 5;
	cout<<auxResto / 2<<endl;
	
	auxResto = auxResto % 2;
	cout<<auxResto / 1<<endl;
	
	return 0;
}
