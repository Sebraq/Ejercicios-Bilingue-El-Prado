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
	int valores[25],a,s;
	cout<<"Ingrese 25 valores"<<endl;
	s=0;

	for(a=0;a<25;++a){
		cin>>valores[a];
		s+=valores[a];
	}
	cout<<" "<<endl;
	cout<<"La suma de los valores es : "<<s<<endl;

	system("PAUSE");
	return 0;
}