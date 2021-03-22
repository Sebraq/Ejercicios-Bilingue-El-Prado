#include <iostream>
#include <math.h>
#include <windows.h>
#include <string>
#include <stdlib.h>
#include <conio.h>
#include <cstdio>
#include <dos.h>


using namespace std;

int main(){
	int valores[30],a,s,p,m;
	cout<<"Ingrese 30 valores"<<endl;
	s=0;
	m=1;
	

	for(a=0;a<30;++a){
		cin>>valores[a];
		s+=valores[a];
		m*=valores[a]; //producto sinonimo multiplicacion
	}
	p=s/a;
	
	cout<<" "<<endl;
	cout<<"La suma de los valores es : "<<s<<endl;
	cout<<"Promedio: "<<p<<endl;
	cout<<"El producto es : "<<m<<endl;

	system("PAUSE");
	return 0;
}