#include <iostream>
using namespace std;

int main(){
	int n1, i = 2, numTrig = 1;
	cin>>n1;
	
	
	while (i <= n1){
		numTrig = i + numTrig;
		i++; 
	}
	
	cout<<numTrig<<endl;
	
	return 0;
}
