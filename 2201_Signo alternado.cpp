#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i=0;
	int n;
	int t;
	
	cout<<"Ingrese un n ";
	cin>>n; 
	while(i<n){
		
		if(i%2==0){
		t=1;
		i++;
		cout<<"\n"<<t;
		}
		else{
		t=-1;	
		i++;
		cout<<"\n"<<t;
		}
	}
	return 0;
}
