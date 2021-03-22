#include <iostream>
#include <cstdio>
#include <string>
#include <dos.h>
#include <Windows.h>
#include <math.h>

using namespace std;
int main(){
	double a,b,c,x1,x2;

	cout<<"Introduzca el primer coeficiente"<<endl;
	cin>>a;
	cout<<"Introduzca el segundo coeficiente"<<endl;
	cin>>b;
	cout<<"Introduzca el tercer coeficiente"<<endl;
	cin>>c;

if (a!=0){

cout<<"Aqui vamos..."<<endl;

}else{

cout<<"No es posible realizar la operacion"<<endl;
}

   x1=(-b+(sqrt(b*b-4*a*c)))/(2*a);
   x2=(-b-(sqrt(b*b-4*a*c)))/(2*a);
   cout<<endl;
   cout<<"X1 : "<<x1<<endl;
   cout<<"X2 : "<<x2<<endl;
	
	system("PAUSE");
	return 0;
}
