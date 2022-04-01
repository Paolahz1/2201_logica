#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
int i=1;
int s=1;
int f;
int N;
cout<<"Bienvenido a este programa que calcula el factorial de un numero dado\n";
cout<<"Ingrese un numero: ";
cin>>N;
  
while(i!=N){
  s=s*i;
  i=i+1;
 }
 f=s*N;
cout<<"Factorial de "<<N <<" es "<< f;
return 0;
}
