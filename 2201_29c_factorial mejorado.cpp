#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	int n;
	int f;
	int nmr;
	int p=0;
	
	cout<<"Ingrese la cnt de numeros que desea: ";
	cin>>nmr;
	while(p<nmr){
		p++;
		int i=1;
		int s=2;
		cout<<"\nIngrese un numero: ";
		cin>>n;
		
		while(i<=n){
		cout<<i;
		s=i+1;
		f=i*s;
		if(i<n){
		cout<<"*";
		}
		i=i+1;
		}
		cout<<"\nFactorial de "<<n <<" = "<<f;
}
	return 0;
}
