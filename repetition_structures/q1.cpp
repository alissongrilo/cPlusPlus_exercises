#include <iostream>

using namespace std;

int main(){
    int n1, n2, result, i = 0;
	bool aux = true;
    cin>>n1>>n2;

    while (aux != false){
		if (i * n2 == n1){
			result = i;
			aux = false;
		} else if (i * n2 > n1){
			result = i - 1;
			aux = false;
		}
	
		i++;
	}
	
	cout<<result<<endl;
	
    return 0;
}
