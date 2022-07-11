#include <iostream>
using namespace std;

int main(){
	int posCard, qtdCard;
	
	cin>>qtdCard>>posCard;
	
	if (qtdCard % 2 == 0){
		if (posCard > qtdCard / 2){
			posCard = posCard / 2;
		} else {
			posCard += 1;
		}
	} else {
		if (posCard > qtdCard / 2){
			posCard = (posCard / 2) + 1;
		} else {
			posCard += 1;
		}
	}
	
	cout<<posCard<<endl;
	return 0;
}
