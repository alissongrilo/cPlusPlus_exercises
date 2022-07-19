#include <iostream>
using namespace std;

void soma(int &a, int &b){
	a = a + b;
}

int main(){
	int a, b;
	
	cin>>a>>b;
	
	soma(a, b);
	
	cout<<a;
	
	return 0;
}
