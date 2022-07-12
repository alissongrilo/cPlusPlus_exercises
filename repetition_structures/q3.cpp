#include <iostream>
using namespace std;

int main(){
	int i = 0, qtdA = 0, qtdB = 0;
	char letter;
	
	while (i < 10){
		cin>>letter;
		if (letter == 'a')
			qtdA += 1;
		else
			qtdB += 1;
	
		i++;
	}
	
	if (qtdA < qtdB)
		cout<<"1"<<endl;
	else
		cout<<"0"<<endl;
	
	return 0;
}
