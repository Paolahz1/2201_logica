#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int numero[15];
	int x=0; int y=1;int z=1;
	
	for(int i=1; i<=15;i++){
	y=x+z;
	x=z;
	z=y; 
	numero[i]=y;  	
	}
	for(int i=1; i<=15;i++){
	cout<<"["<<i<<"]"<<numero[i]<<endl; 	
	}
	return 0;
}
