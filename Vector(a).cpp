#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
/*	int n;
	cout<<"Ingrese la cantidad de números que desea: ";
	cin>>n;
	int numero[n+1]; //Crea n cantidad de nuestos más 1+
*/
	
	int numero[15];

	for(int i=1; i<=15; i++){ //inicializa i, pregunta si i es menos al numeros de espacios que hay. 
		cout<<"Ingrese su numero: ";
		cin>>numero[i]; //ingresa el numero al puesto i 
	}
	
	for(int i=1; i<=15;i++){
	
		if(numero[i]%2==0){
				cout<<"["<<i<<"]"<<"->"<<numero[i]<<" Es par"<<endl;	
		}
		else{
		
				cout<<"["<<i<<"]"<<"->"<<numero[i]<<"Es impar"<<endl;	
		}
	}	
	
	return 0;
}
