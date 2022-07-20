#include <iostream>
#include <iomanip>

using namespace std;
float calculaDistancia(float qtdTempo, float vMedia, float distanciaA){
	float distancia;

	distancia = (vMedia * qtdTempo) + distanciaA; 
	return distancia;
}

void calculaMilha (float &distancia){
	distancia = distancia / 1.852;
}

int main(){
	float distancia; //distância atual da embarcação em relação ao porto de origem. (em quilômetros)
	float vMedia; //velocidade média da embarcação. (em quilômetros por hora)
	float qtdTempo; //Tempo gasto para percorrer um trajeto. (em horas)
	bool n = true;
	

	while (n == true){
		cin>>distancia;
		
		if (distancia < 0){
			n = false;
		} else {
			cin>>vMedia>>qtdTempo;
			
			calculaMilha(distancia);
			calculaMilha(vMedia); // 30km/hr = xMilhas/hr
			
			cout<<fixed<<setprecision(2)<<distancia<<" ";
			cout<<fixed<<setprecision(2)<<calculaDistancia(qtdTempo, vMedia, distancia)<<endl;
		}
	}
	return 0;
}
