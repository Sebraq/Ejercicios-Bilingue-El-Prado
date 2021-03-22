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
	double a,b,c,d;
	c=0;
	cout<<"Cuantos numeros quiere promediar?"<<endl;
	cin>>a;
	cout<<endl;
	for(b=1;b<=a;++b){
		cout<<"Ingrese un numero"<<endl;
		cin>>d;
		c=c+d;
	}
	d=c/a;
	cout<<endl;
	cout<<"El promedio es : "<<d<<endl;
	cout<<endl;

	system("PAUSE");
	return 0;
}
