#include <iostream>
using namespace std;
// Este programa clasifica el valor de las sillas según la cantidad que desee el usuario. 

int main(int argc, char** argv) {
	int vlr;
	int num[3];
	
	for(int i=0;i<3;i++){
	cout<<"\ningrese una cnt de sillas: ";
	cin>>num[i]; 
	 if(num[i]<4){
			vlr=15;
				cout<<"valor de las sillas: "<<vlr;
		} 
		else{
			if(num[i]<8){
				vlr=12;
					cout<<"valor de las sillas: "<<vlr;
			}
			else{
				if(num[i]>=8){
					vlr=10;
						cout<<"valor de las sillas: "<<vlr;
				}
			}
		}
	}


	
return 0;	 
}


