#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int s=0;
	int i=0;
	int N;
	int nmr;
	int p=0;
	int otro;
	cout<<"Bienvenido";
	do{
		cout<<"\nIngrese la cantidad de numeros que desee: ";
		cin>>N;
	
		while(i<N){
		cout<<"\nIngrese un numero: ";
		cin>>nmr; 
		s=s+nmr;
		i++	;
		}
		p=int(s/N);
		cout<<"El promedio de los numeros es de: "<<p; 
		cout<<"\nIngrese 1 si desea repetir el programa"; 
		cin>>otro; 	
	}while(otro==1);
	return 0;
}
