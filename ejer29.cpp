#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int main(){
	int o;
	cout<<"Elija un numero"<<endl;
	cout<<endl;
cout<<"1:Cubo de un numero"<<endl;
cout<<"2:Raiz cuadrada"<<endl;
cout<<"3:Velocidad de un automovil"<<endl;
cout<<"4:Area de un circulo"<<endl;
cout<<endl;
cout<<"Opcion a elegir"<<endl;
cin>>o;
switch(o){
case 1:
	int a,b;
	cout<<"Ingrese un numero"<<endl;
	cin>>a;
	b=a*a*a;
	cout<<endl;
	cout<<"El cubo de su numero es: "<<b<<endl;
	break;
case 2:
	double c,d;
	cout<<"Ingrese un valor"<<endl;
	cin>>c;
	d=sqrt(c);
	cout<<endl;
	cout<<"La raiz cuadrada es : "<<d<<endl;
	break;
case 3:
	double g,t,u;
	cout<<"Ingrese el tiempo"<<endl;
	cin>>g;
	cout<<"Ingrese la distancia"<<endl;
	cin>>t;
	u=t/g;
	cout<<endl;
	cout<<"La velocidad de su vehiculo es : "<<u<<endl;
	break;
case 4:
	double rad,mult;
	cout<<"Ingrese el radio de su circulo"<<endl;
	cin>>rad;
	mult=rad*rad*(3.14);
	cout<<endl;
	cout<<endl;
	cout<<"El area de su circulo es : "<<mult<<endl;
	break;
}
system("PAUSE");
return 0;

}