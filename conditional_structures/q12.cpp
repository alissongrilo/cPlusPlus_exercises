#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float a, b, c, delta, r1, r2;
	
	cin>>a>>b>>c;
	
	delta = pow(b, 2) - (4 * a * c);
	
	if (delta > 0){
		r1 = (-b - sqrt(delta)) / (2 * a);
		r2 = (-b + sqrt(delta)) / (2 * a);
		cout<<r1<<"  "<<r2<<endl;
	} else if (delta == 0){
		r1 = (-b) / (2 * a);
		cout<<r1<<"  "<<r1<<endl;
	} else {
		cout<<"nenhuma raiz"<<endl;
	}
	
	return 0;
}
