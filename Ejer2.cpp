#include <iostream>
#include <math.h>
#include <windows.h>
#include <string>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main(){
	int a,b,sum,mult,div,res;
	
	cout<<"Ingrese una valor"<<endl;
	cin>>a;
	cout<<"Ingrese otro valor"<<endl;
	cin>>b;
	sum=a+b;
	res=a-b;
	mult=a*b;
	div=a/b;

	cout<<"La Suma de los valores es: "<<sum<<endl;
	cout<<"La resta de los valores es: "<<res<<endl;
	cout<<"La multiplicacion de los valores es: "<<mult<<endl;
	cout<<"La division de los valores es: "<<div<<endl;

	system("PAUSE");
	return 0;
}