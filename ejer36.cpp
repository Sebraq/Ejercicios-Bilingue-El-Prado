#include <iostream>
#include <math.h>
#include <cstdlib>
#include <dos.h>
#include <Windows.h>
#include <cstdio>
#include <string>

using namespace std;

int main(){
	double numero,fact,i;
	fact=1;
	cout<<"Ingrese un numero entre 1 y 20"<<endl;
	cin>>numero;
	cout<<endl;
	cout<<endl;
	if(numero>20){
		cout<<"Valor invalido,Pruebe otro numero y lea bien -_-"<<endl;
	}else{
		for (i = 1; i <= numero; i++){
         fact = fact*i;
		 
		}
	}
	if (numero<20){
	 cout<<"El factorial de su numero es: "<<fact<<endl;
	}

	 cout<<endl;
	system("PAUSE");
	return 0;
}