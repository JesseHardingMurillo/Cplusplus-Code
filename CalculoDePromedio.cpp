#include <iostream>

using namespace std;

int main() {
    float nota1 = 0;
    float nota2 = 0;
    float nota3 = 0;
    
    
    
    
    cout << "Ingrese la primera nota:";
    cin >> nota1;
    cout << "Ingrese la primera nota:";
    cin >> nota2;
    cout << "Ingrese la primera nota:";
    cin >> nota3;
    
//    Calculo del promedio
	float promedio=(nota1+nota2+nota3)/3;
    cout << "Su promedio es de: " << promedio << "\n";
    
//    Para saber si esta aprobado o reprobado
	if (promedio >= 70){
		cout<< "Aprobado";	
	}
	else{
		cout<< "Reprobado";
	}	
}
