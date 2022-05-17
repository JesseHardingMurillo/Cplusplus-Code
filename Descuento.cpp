#include <iostream>
using namespace std;

// Valor de la matricula 100 000
int main(){
	int matricula = 100000;
	float nota = 0;
	float descuento = 0; 
	int total = 0;
	
	cout << "Ingrese la nota del estudiante: "; 
	cin >> nota;  
	if (90<=nota){
		descuento = matricula * 0.2;
	}
		else if (nota<90 && nota>=80){
			descuento = matricula * 0.1;
		}
			else if ( nota>=70 && nota <80){
				descuento = matricula * 0.05;
			}
			else{
				cout << " No tiene descuento"<<endl; 
			}
	
	total = matricula - descuento;
	cout << "El descuento es de:" << descuento <<"\n";
	cout << "El total es de: " << total << "\n";
	return 0;
}
	