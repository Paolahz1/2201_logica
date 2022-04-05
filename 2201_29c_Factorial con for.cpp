#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int getFact(int x){
    int f=1;
    int i;
	for(i=2;i<=x;i++){
	f=f*i;	
	cout<<i;
	if(i<x){
	cout<<"*";
	}
}
cout<<" = "<<f;
	return 0;
}


int main(int argc, char** argv) {
	int n;
	int c;
	cout<<"Ingrese un numero a calcular factorial: ";
	cin>>n;
	getFact(n);

	return 0;
}
