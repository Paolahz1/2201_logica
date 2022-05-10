#include <iostream>
#include <sstream> 
using namespace std;
void leer(int **M,int F,int C, int tip){
	
	for(int i=0; i < F; i++) {
	    for(int j=0; j < C; j++) {
	    	if (tip == 1) cout<<"Espania "<<i<<" "<<j<<": ";
			cin>>M[i][j];
	    }
	}
}
void leerA(int **E,int F,int C, int tip){
	
	for(int i=0; i < F; i++) {
	    for(int j=0; j < C; j++) {
	    	if (tip == 2) cout<<"Londres "<<i<<" "<<j<<": ";
			cin>>E[i][j];
	    }
	}
}
void imprimir(int **M, int F, int C){
	for(int i=0; i<F; i++) {
	    for(int j=0; j<C; j++) {
	        cout<<M[i][j]<<" "; 
	    }
	    cout<<endl;
	}
	cout<<endl;
}
void imprimirA(int **E, int F, int C){
	for(int i=0; i<F; i++) {
	    for(int j=0; j<C; j++) {
	        cout<<E[i][j]<<","; 
	    }
	    cout<<endl;
	}
}
void sumar(int **M, int **E, int F, int C){
	for(int i=0;i<F;i++){
		for(int j=0;j<C;j++){
		M[i][j]+=E[i][j];
		}
	}
}
void imprimirS(int **M, int F, int C){
	for(int i=0; i<F; i++) {
	    for(int j=0; j<C; j++) {
	        cout<<M[i][j]<<","; 
	    }
	    cout<<endl;
	}
}
int main(int argc, char *argv[]) {
int F, C, a; 
F = 3; C = 2;
int **M = new int *[F];
for(int x = 0; x < F; x++) M[x] = new int[C];
int **E = new int *[F];
for(int x = 0; x < F; x++) E[x] = new int[C];
int **S = new int *[F];
for(int x=0; x<F; x++) S[x] = new int[C];
leer(M, F, C,1);
leerA(E, F, C,2);
imprimir(M, F, C);
imprimirA(E, F, C);
sumar(M,E,F,C);
imprimirS(M, F, C);
return 0;
}










