#include<stdio.h>
#include<math.h>
#include <iostream>
#include<Windows.h>
#include<dos.h>
#include<conio.h>

using namespace std;
int main(){
	int a,b,c;
	cout<<"Ingrese el primer valor"<<endl;
	cin>>a;
	cout<<"Ingrese un segundo valor"<<endl;
	cin>>b;
	c=(a*a)+(b*b);
	cout<<"El resultado es: "<<c<<endl;
	
	system("PAUSE");
	return 0;
}
