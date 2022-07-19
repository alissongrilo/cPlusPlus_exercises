#include <iostream>
using namespace std;

float Media(float a, float b){
	return (a+b)/2;
}

int main(){
	float a, b;
	cin>>a>>b;
	cout<<Media(a,b);
	return 0;
}
