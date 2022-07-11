#include <iostream>
#include <string>
using namespace std;

int main(){
	string primeiraCor, segundaCor;
	int N, ultimos, primeiros;
	
	cin>>primeiraCor>>segundaCor>>N;
	
	primeiros = N / 10000;
	ultimos = N % 100;
	
	if (primeiros%10 == ultimos/10 and primeiros/10 == ultimos%10)
		cout<<primeiraCor<<endl;
	else
		cout<<segundaCor<<endl;

	return 0;
}
