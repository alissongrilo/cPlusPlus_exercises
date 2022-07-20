#include <iostream>
using namespace std;

int fatorial(int n){
	if (n == 0){
		return 1;
	} else {
		if (n-2 < 0){
			return n * fatorial(n-1);
		} else {
			return (n * fatorial(n-2));
		}
	}
}


int main(){
	int n;
	cin>>n;
	cout<<fatorial(n);
	return 0;
}
