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
	double a,b,c,d,e;
	d=0;
	e=0;
	cout<<"Ingrese el primer valor"<<endl;
	cin>>a;
	cout<<"Ingrese el segundo valor"<<endl;
	cin>>b;
	cout<<"Ingrese el tercer valor"<<endl;
	cin>>c;
	if (a+b>c && a+c>b && c+b>a){
		cout<<"Es un triangulo"<<endl;
		d=a+b+c;
		e=sqrt(d* (d-a) * (d-b) * (d-c));
		cout<<"El perimetro es : "<<d<<endl;
	    cout<<"El area es : " <<e<<endl;
	}else{
		cout<<"No es un triangulo"<<endl;
}
	
	cout<<endl;
	system("PAUSE");
	return 0;

}

