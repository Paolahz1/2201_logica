#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int getDiv(int N, int OP){
	int c=0;
	int i=2;
	int s=0;
	
	while(i<=N/2){
		if(N%i==0){
			c=c+1;
			s=s+i;
		}
		i++;
	}
	if(OP==1){
		return c;
	}
	else{
		return s;
	}
}

int main(int argc, char** argv) {
	
	int CntDiv;
	int Sum;
	int n;
	int op;
	int otro=1; 
	
	while(otro==1){
		cout<<"Ingrese un nmr: ";
		cin>>n;
		cout<<"\nIngrese 1 (Primo) o 2 (Perfecto)";
		cin>>op;
		
		if(op==1){
			CntDiv = getDiv(n,op);
			if(CntDiv>0){
				cout<<"\nNo es primo";
			}
			else{
				cout<<"\nEs primo";
			}
		}
		else{
			Sum= 1+getDiv(n,op);
			if(Sum==n){
				cout<<"\nEs perfecto";
			}
			else{
				cout<<"\nNo es perfecto";
			}
		}
	cout<<"\nIngrese 1 si desea otro: ";
	cin>>otro;
	}

	return 0;
}
