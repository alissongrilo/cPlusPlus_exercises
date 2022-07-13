#include <iostream>
using namespace std;

int main(){
	
	int linhas, i = 1, j;
	
	cin>>linhas;
	
	while (i <= linhas){
		j = 1;
		while (j <= linhas){
			if (i % 2 == 0){
				if (j % 2 == 0){
					cout<<".";
				} else {
					cout<<"#";
				}
			} else{
				if (j % 2 == 0){
					cout<<"#";
				} else {
					cout<<".";
				}
			}
			j++;
		}
		cout<<endl;
		i++;
	}
	return 0;
}
