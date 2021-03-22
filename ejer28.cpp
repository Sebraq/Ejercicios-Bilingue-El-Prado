#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

int main(){
	//1ra
	int mat1[4][4],mat2[4][4],mat3[4][4],m,s;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<"Ingrese un numero ["<<i<<"]["<<j<<"]: ";
			cin>>mat1[i][j];
		}
	} 
	
	cout<<"\nMostrando matriz\n\n";
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<mat1[i][j]<<" ";
		}
		cout<<"\n";
	}
	//2da
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>mat2[i][j];
		}
	} 
	
	cout<<"\nMostrando matriz\n\n";
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<mat2[i][j]<<" ";
		}
		cout<<"\n";
	}
	//3
	cout<<"\nMultiplicacion de matriz\n\n";
	//inicio
	for(int i=0;i<4;++i){
		for(int j=0;j<4;++j){
				mat3[i][j]=0;
		}
	}
	for(int i=0;i<4;++i){
		for(int j=0;j<4;++j){
			for(int t=0;t<4;++t){
				mat3[i][j]+=mat1[i][t] * mat2[t][j];
		}
	}
}
cout<<endl;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<mat3[i][j]<<" ";
		}
		cout<<"\n";
	}
		system("pause");
		return 0;
	}
