/* 
Escribe un programa que lea de entrada estandar dos numeros y muestre
en la salida estandar su suma,resta , multiplicacion y division

*/

#include<iostream>

using namespace std;

int main(){
	float a,b,suma = 0 , resta= 0, multiplicacion=0, division=0;
	
	cout<<"Digite el primer numero: "; cin>>a;
	cout<<"Digite el segundo numero: "; cin>>b;
	
	suma = a + b;
	resta = a - b;
	multiplicacion = a * b;
	division = a / b;
	
	cout<<"\nLa suma es: "<<suma<<endl;
	cout<<"\nLa resta es: "<<resta<<endl;
	cout<<"\nLa multiplicacion es: "<<multiplicacion<<endl;
	cout<<"\nLa division es: "<<division<<endl;

	return 0;
}