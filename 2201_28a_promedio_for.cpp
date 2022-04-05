#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int s=0;
	int i=0;
	int nmr;
	int N;
	int p;
	
	cout<<"Bienvenido a este programa que calcula el promedio de una cantidad de números\n";
	cout<<"Ingrese la cantidad de numeros que desee: ";
	cin>>N;
	
	for(i=0;i<N;i++){
		cout<<"\nIngrese un numero: ";
		cin>>nmr;
		s=s+nmr;
	}
	p=int(s/N);
	cout<<"El promedio de los numeros es: "<<p;

	
	return 0;
}
