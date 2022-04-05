#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	int f=1;
	int i;
	cout<<"Ingrese un numero a calcular factorial: ";
	cin>>n;
	
	for(i=2;i<=n;i++){
	f=f*i;	
	cout<<i;
	if(i<n){
	cout<<"*";
	}

}
cout<<" = "<<f;
	return 0;
}
