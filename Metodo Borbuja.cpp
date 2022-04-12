#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int n;
	int aux; 
	
	cout<<"ingrese una cantidad de numeros:" ; 
	cin>>n;
	int numero[n];
	
	for(int i=1;i<=n;i++){
	cout<<"Ingrese un numero: "<<endl;
	cin>>numero[i];
	}

	for(int k=2;k<=n;k++){
		for(int j=0;j<=n;j++){
			if(numero[j]>numero[k]){
				aux=numero[j];
				numero[j]=numero[k];
				numero[k]=aux;
			}
		}
	}
	for(int z=1;z<=n;z++){
	cout<<"["<<z<<"]"<<numero[z]<<endl;
	}
	return 0;
}
