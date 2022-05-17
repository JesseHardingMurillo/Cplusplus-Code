#include <iostream>
 
using namespace std;
 
int main()
{
	// Declaro donde voy a guardar las notas
	float nota1 = 0;
	float nota2 = 0;
	float nota3 = 0;
	
    cout <<  "Ingrese la primera nota: ";
    cin >> nota1;
    while(nota1 >= 101 ){
        cout <<  "Ingrese la primera nota: ";
        cin >> nota1;	
    }
    

    cout <<  "Ingrese la segunda nota: ";
    cin >> nota2;
    while(nota2 >= 101){
        cout <<  "Ingrese la segunda nota: ";
        cin >> nota2;	
    }
    
 	cout <<  "Ingrese la tercera nota: ";
    cin >> nota3;
    while(nota3 >= 101){
        cout <<  "Ingrese la tercera nota: ";
        cin >> nota3;
    }
    
    cout << "Primera nota:" << nota1 << "\n";
    cout << "Segunda nota:" << nota2 << "\n";
    cout << "Tercera nota:" << nota3 << "\n";
    
    
    float promedio=(nota1+nota2+nota3)/3;
    cout << "Su promedio es de: " << promedio << "\n";

	if (promedio>=70){
		cout<<"Aprovado"<<endl;
	}
		else if (promedio>=61 && promedio<70 ){
				cout<<"Ampliacion"<<endl;	
		}
			else if (promedio<60){
				cout<<"Reprobado"<<endl;
			}
			
    return 0;
}
