#include <iostream>
using namespace std;

float achaMenor(float menorNum, float n1, float n2, float n3, float n4){
	
	menorNum = n1;
	
	if (menorNum > n2)
		menorNum = n2;

	if (menorNum > n3)
		menorNum = n3;
		
	if (menorNum > n4)
		menorNum = n4;
		
	return menorNum;
}

int main(){
	float n1, n2, n3, n4, menorNum = 0;
	
	cin>>n1>>n2>>n3>>n4;
	
	menorNum = achaMenor(menorNum, n1, n2, n3, n4);
	
	if (menorNum == n1){
		cout<<n2+n3+n4<<endl;
	} else if (menorNum == n2){
		cout<<n1+n3+n4;
	} else if (menorNum == n3){
		cout<<n1+n2+n4<<endl;
	} else {
		cout<<n1+n2+n3<<endl;
	}
	
	return 0;
}
