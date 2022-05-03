#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int matriz[3][4]; 
	int con=0; 
	
	for(int j=0;j<4;j++){
		for(int i=0;i<3;i++){
			matriz[i][j]=con;
			con++;
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
		cout<<matriz[i][j]<<" ";
		}cout<<endl; 
	}	
	
	return 0;
}
