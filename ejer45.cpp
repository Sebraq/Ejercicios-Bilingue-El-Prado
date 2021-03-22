#include <iostream>

using namespace std;

int main(){
	int i,a,f,opcion,l;
	i=1;
	a=1;
	int validacion=0;
	while(validacion==0){
	cout<<"Menu"<<endl;
	cout<<"1.Numeros impares de 0 a 200"<<endl;
	cout<<"2.Numeros pares de 0 a 200"<<endl;
	cout<<"3. Salir"<<endl;
	cout<<"Opcion a elegir; ",cin>>opcion;
	switch(opcion){
	case 1:
		while(i<=200){
			if(i % 2==1){
				cout<<i<<" ";
			}
			i++;
		}
		cout<<endl;
		cout<<"Desea continuar? 1.Si 2.NO"<<endl;
		cin>>l;
		if(l==1){
			validacion=0;
		}else{
			validacion=1;
		}
		break;
	case 2:
		while(a<=200){
			if(a % 2==0){
				cout<<a<<" ";
			}
			a++;
		}
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
	}
	}
	
}