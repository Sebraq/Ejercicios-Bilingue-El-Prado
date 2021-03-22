
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[100][100],filas,columnas,may;
	may=0;
	
	//relleno matriz	
	for(int i=1;i<=4;i++){
		for(int j=1;j<=4;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j];
			if (may<numeros[i][j]){
			 may=numeros[i][j];
		 }
		}
	} 
	
	cout<<"\nMostrando matriz\n\n";
	
	for(int i=1;i<=4;i++){
		for(int j=1;j<=4;j++){
			cout<<numeros[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<endl;
	cout<<"El mayor es : "<<may<<endl;
	
	getch();
	return 0;
}