#include <iostream>
using namespace std;

void imprimePiramide(int n){
	int i = 1, j;
	
	while (i <= n){
		j = 1;
		while (j <= i){
			cout<<j<<" ";
			j++;
		}
		cout<<endl;
		i++;
	}
	
}

int main(){
	int n;
	cin>>n;
	
	imprimePiramide(n);
	return 0;
}
