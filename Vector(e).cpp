#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int numero[15]; 
	int n;
	int nmr;
	
	cout<<"Ingrese la cnt de numeros: ";
	cin>>n;
	for(int i=1;i<=n;i++){
		cout<<"Ingrese un numero: ";
		cin>>nmr;
		while(nmr<1||nmr>10){
		cout<<"Ingrese un numero: ";
		cin>>nmr;			
		}
		numero[i]=nmr; 
	}
	cout<<"Los numeros ingresados fueron:"<<endl;
	
	for(int i=n;i>=1;i--){
		cout<<"["<<i<<"]"<<"-> "<<numero[i]<<endl; //Entrega lus numeros ingresados de manera decreciente 
	}
	return 0;
}
