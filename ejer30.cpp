#include <iostream>
#include <string>
#include <cstdio>
#include <dos.h>
#include <Windows.h>


using namespace std;

int main(){
	double nit,cantidad,uni,iva,sub,total,s,l,n,mult,suma,b,k,c;
	string nombre,producto,d;
	b=0;
	k=0;
	c=0;
	suma=0;
	cout<<"\t\t\t\t"<<"Factura"<<endl;
	cout<<endl;
	cout<<"Nombre del cliente"<<endl;
	cin>> nombre;
	cout<<"Direccion del cliente"<<endl;
	cin>> d;
	cout<<"NIT cliente"<<endl;
	cin>> nit;
	cout<<"Productos comprados? NO MAS DE 7"<<endl;
	cin>> n;
	if(n>7){
		cout<<"No se pueden mas de 7 productos"<<endl;
		return 0;
	}else{
		for(s=1;s<=n;++s){
		cout<<"Producto comprado"<<endl;
		cin>>producto;
		cout<<"Cantidad"<<endl;
		cin>>cantidad;
		cout<<"Precio unitario?"<<endl;
		cin>>uni;
		cout<<endl;
		mult=cantidad*uni;
		k=k+mult;
		iva=(mult*12)/100;
		c=c+iva;
		suma=iva+mult;
		b=b+suma;
		}
	}
	cout<<"Subtotal: "<<k<<endl;
	cout<<"  IVA   : "<<c<<endl;
	cout<<" Total  : "<<b<<endl;

	system("PAUSE");
	return 0;

}
