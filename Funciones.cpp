// Encontrar el numero mayor de 2 numeros

#include<iostream>
#include<conio.h>
using namespace std;

//Prototipo de la funcion
int encontrarMay(int a, int b);

int main(){
	int n1, n2;

	cout<< "Digite 2 numeros: ";
	cin>>n1>>n2;
	cout<< "El mayor de los dos numeros es: " <<encontrarMay(n1,n2)<<endl;
	
	getch();
	return 0;
} 
// creamos la funcion

int encontrarMay(int a, int b){
	int numMay;
	
	if(a>b){
		numMay = a ;
	}
	
	else{
		numMay = b ;
	}
	
	return numMay;
}