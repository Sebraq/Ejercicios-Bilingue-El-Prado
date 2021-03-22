#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[100][100],filas,columnas,may,mat[100][100];
	
	//matriz 1
	//relleno matriz	
	for(int i=0;i<=4;i++){
		for(int j=0;j<=4;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j];
			
		}
	} 
	
	cout<<"\nMostrando matriz\n\n";
	
	for(int i=0;i<=4;i++){
		for(int j=0;j<=4;j++){
			cout<<numeros[i][j]<<" ";
		}
		cout<<"\n";
	}
	//matriz 2
		for(int i=0;i<=4;i++){
		for(int j=0;j<=4;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>mat[i][j];
			
		 }
		}
	 
	cout<<"\nMostrando matriz\n\n";
	
	for(int i=0;i<=4;i++){
		for(int j=0;j<=4;j++){
			cout<<mat[i][j]<<" ";
		}
		cout<<"\n";
	}
	//suma
	cout<<"\nSuma de la matriz\n";
	
	for(int i=0;i<=4;i++){
		for(int j=0;j<=4;j++){
			cout<<numeros[i][j]+ mat[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"\n";
	//resta
	cout<<"\nSuma de la matriz\n";
	
	for(int i=0;i<=4;i++){
		for(int j=0;j<=4;j++){
			cout<<numeros[i][j]- mat[i][j]<<" ";
		}
		cout<<endl;
	}
	for(int i=0;i<=4;i++){
		for(int j=0;j<=4;j++){
			cout<<mat[i][j]<<" ";
		}
		cout<<"\n";
	}
	getch();
	return 0;
}