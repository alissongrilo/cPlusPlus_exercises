#include <iostream>
using namespace std;

int main(){
	int ladoPolig, qtdDiagonal;
	
	cin>>ladoPolig;
	if (ladoPolig >=3){
		qtdDiagonal = (ladoPolig * (ladoPolig - 3)) / 2;
		cout<<qtdDiagonal;
	}
	return 0;
}
