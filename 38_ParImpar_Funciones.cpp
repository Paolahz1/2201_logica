#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


//determina si es par o impar
 int getParImpar(int N){
	int r;
	
 	if(N%2==0){
 		r=0;
	 }
	 else{
	 	r=1;
	 }
	 return r;
	 ;
}
int main(int argc, char** argv){
int R;
int n;

cout<<"Ingrese un numero: ";
cin>>n;
R = getParImpar(n);
  	if(R==0){
  	  cout<<"Es par ";
	  }
	  else{
	  	cout<<"Es impar ";
	  };
  	
 	return 0;
}

