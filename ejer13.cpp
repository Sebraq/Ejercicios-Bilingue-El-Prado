#include <iostream>
#include <cstdio>
#include <string>
#include <dos.h>
#include <Windows.h>
#include<math.h>

using namespace std;
	int main(){
		double r,p,a;
		cout<<"Ingrese el radio de su circunferencia"<<endl;
		cin>>r;
		cout<<endl;
		p=(2*3.14)* r;
		a=r*r*(3.14);
		cout<<"El perimetro es: "<<p<<endl;
		cout<<"El area es: "<<a<<endl;

		system("PAUSE");
		return 0;
}
