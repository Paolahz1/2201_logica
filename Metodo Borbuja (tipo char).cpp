#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int n;
	int aux; 
	
	cout<<"ingrese una cantidad de letras:" ; 
	cin>>n;
	char letra[n];
	
	for(int i=1;i<=n;i++){
	cout<<"Ingrese una letra: ";
	cin>>letra[i];
	}

	for(int i=0;i<=n;i++){
		for(int j=0;j<=n;j++){
			if(letra[j]>letra[i]){
				aux=letra[j];
				letra[j]=letra[i];
				letra[i]=aux;
			}
		}
	}
	for(int z=1;z<=n;z++){
	cout<<"["<<z<<"]"<<letra[z]<<endl;
	}
	return 0;
}
