#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int nmrMes;
	int dias; 
	int otro=1;
	

	do{
	cout<<"Ingrese el numero del mes que desea: ";
	cin>>nmrMes;
	switch(nmrMes){
		case 1:
			dias=31; 
		break;
		case 3:
			dias=31; 
		break;	
		case 5:
			dias=31; 
		break;
		case 7:
			dias=31; 
		break;
		case 8:
			dias=31; 
		break;
		case 10:
			dias=31; 
		break;
		case 12:
			dias=31; 
		break;
		
		
													
		case 2:
			dias=28;
		break;
		
		
		
		case 4:
			dias=30;
		break;	
		case 6:
			dias=30;
		break;
		case 9:
			dias=30;
		break;
		case 11:
		dias=30;
		break;						
	}
	cout<<"El mes "<<nmrMes<<" tiene: "<<dias<<" dias";
	cout<<"\nIngrese 1 si desea otro mes: ";
	cin>>otro;
}while(otro==1);
	return 0;
}
