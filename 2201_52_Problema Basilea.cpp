#include <iostream>
#include<math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float s=0;
	int n;
	int i=2;
	
	cout<<"Ingrese un punto maximo: ";
	cin>>n;
	
	cout<<"1 + ";

	for(int i=1;i<=n;i++){
		s=s+ float(1/(pow(i,2)));
		cout<<"1/"<<i<<"^2 ";
			
			if(i<n){
			cout<<"+";			
			} 
		}
		cout<<" = "<<s<<endl; 
		
	return 0;
}
