#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int Sal;
	int Nom; 
	int imp1=0, imp2=0, imp3=0; 
	int Timp=0;
	int Tnom=0;
	int i=0;
	int c;
	
	cout<<"Ingrese la cantidad de empleados: ";
	cin>>c;
	
	while(i<c){
	
		cout<<"\nIngrese su salario semanal: ";
		cin>>Sal; 
		Nom=Sal*4;
		cout<<"Su nomina es: "<<Nom;
				
		if(Nom>800){
			imp1=Nom*0.06;
			cout<<"\nEl impuesto aplicado a su sueldo es de: "<<imp1;
			i++;
		}
		else{
		
			if((Nom>700)&&(Nom<=800)){
				imp2=Nom*0.04;
				cout<<"\nEl impuesto aplicado a su sueldo es de: "<<imp2;
				i++;
			}
			else{
			
			    if(Nom<=700){
				imp3=Nom*0.02;
				cout<<"\nEl impuesto aplicado a su sueldo es de: "<<imp3;
				i++;
			    }
			}
		}
		
		Timp=imp1+imp2+imp3;
		Tnom=Tnom+Nom;
	}
	
	cout<<"\nTotal de impuestos compilados es de: "<<Timp;
	cout<<"\nTotal nomina es de: "<<Tnom;
	
	
	return 0;
}
