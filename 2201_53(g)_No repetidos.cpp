#include <iostream>

using namespace std;

bool repetido(int n, int k);
int numero[]={};

int main(){

int tam; int num;
	
	cout<<"Ingrese el tamaño del vector: ";
	cin>>tam;
	
for(int i=0; i<tam; i++){
	cout<<"Ingrese un numero: "; 
	cin>>num;
	
	while(repetido(num,i)){
		cout<<"Numero repetido, ingrese OTRO numero: ";
		cin>>num;
	}
	numero[i]=num;
	
}
	for(int i=0;i<tam;i++){
		cout<<"["<<i<<"]"<<"->"<<numero[i]<<endl;
	}
return 0; 
}

//Función
bool repetido(int n, int k){
	
	for(int x=0; x<k; x++){
	
		if(n == numero[x]){
			return true;
		}
	}
	return false;
}
