#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
int a;
int b;
int p;
int r;
int Cont=0;	

cout<<"Ingrese a: ";
cin>>a;
cout<<"\nIngrese b: ";
cin>>b;

	do{

		cout<<"\nIngrese la operacion, donde 1(+) 2(-) 3(*) 4(/) 5(%): ";
		cin>>p;
		
		switch(p){
			case 1:
				r=a+b;
				cout<<a<<" + "<<b<<" = "<<r;  
				break;
			case 2:
				r=a-b;
				cout<<a<<" - "<<b<<" = "<<r;  
				break;	
			case 3:
				r=a*b;
				cout<<a<<" * "<<b<<" = "<<r;  
				break;
			case 4: 
			    while(b==0&&Cont<=2){
				cout<<"\nReingrese b: ";
				cin>>b;
				Cont++;
				}	
		    	r=int(a/b);
				cout<<r;
				break;	
			case 5: 
				cout<<a<<" % "<<b<<" = "<<a%b;  
				break;											
			default: 
				cout<<"Error"; 		
		}
	}while(p!=6);
	return 0;
}
