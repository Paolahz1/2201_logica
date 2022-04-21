#include <iostream>
using namespace std;



int main(int argc, char** argv) {
int t; 
int cnt[6]; 
int otro; 

 do{
	
	cout<<"Ingrese el tipo de vacuna: "; 
	cin>>t;
	switch(t){	
		case 1: 
		cout<<"\nToma moderna"; 
		cnt[t]=cnt[t]+1;
		break;
		
		case 2: 
		cout<<"\nToma moderna"; 
		cnt[t]=cnt[t]+1;
		break;
		
		case 3: 
		cout<<"\nToma moderna"; 
		cnt[t]=cnt[t]+1;
		break;	
		
		case 4: 
		cnt[t]=cnt[t]+1;
		cout<<"\nToma pfizzer"; 
		break; 	
		
		case 5: 
		cout<<"\nToma aztraz";
		cnt[t]=cnt[t]+1;
		break;
		}
		cout<<"\nSi desea continuar ingrese (1):  ";
		cin>>otro; 	
	}while(otro==1);

	for(int i=1;i<=
	5;i++){
		cout<<"Cantidad que tomaro tipo "<<i<<"->"<<cnt[i]<<endl; 
	}
	return 0;
}
