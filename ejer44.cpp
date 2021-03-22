#include<iostream>
#include<conio.h>
#include<cstdio>


using namespace std;
int main(){
	int cont,num,opcion,mult,num2,i,a,validacion,l;
	i=1;
	a=0;
	validacion=0;
	while(validacion==0){
	cout<<"Elija una opcion"<<endl;
	cout<<"\n";
	cout<<"1. Tabla de multiplicacion de un numero"<<endl;
	cout<<"2.Suma de numeros impares"<<endl;
	cout<<"3.Salir del programa"<<endl;
	cout<<"\n";
	cin>>opcion;
	switch(opcion){
	case 1:
		cout<<"Valor para ver la tabla de multiplicar? ",cin>>num;
		if(num<=0){
			cout<<"Esto no es posible"<<endl;
		}else{
		for(cont=1;cont<=20;++cont){
			mult=cont*num;
			cout<<num<<" * "<<cont<<" = "<<mult<<endl;
		
		}
		}
		cout<<"Desea continuar? 1.Si 2.NO"<<endl;
		cin>>l;
		if(l==1){
			validacion=0;
		}else{
			validacion=1;
		}
		break;
		
		
	case 2:
		cout<<"Ingrese un numero limite ",cin>>num2;
		while(i<=num2){
			if(i % 2==1){
				cout<<i<<" ";
				a=a+i;
			}
			i++;
		}
		cout<<endl;
		cout<<"La suma es: "<<a<<endl;
	cout<<endl;
	cout<<"Desea continuar? 1.Si 2.NO"<<endl;
		cin>>l;
		if(l==1){
			validacion=0;
		}else{
			validacion=1;
		}
		break;
		
	case 3:
		return 0;
		system("pause");
	
	}
	
	
	
	}
}




