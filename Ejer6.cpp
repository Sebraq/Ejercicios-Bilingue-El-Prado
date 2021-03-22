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
   int a1,a2,a3,mayor;
	cout<<"Ingrese un valor"<<endl;
   cin>>a1;
   cout<<"Ingrese un valor"<<endl;
   cin>>a2;
   cout<<"Ingrese un valor"<<endl;
   cin>>a3;

   if (a1>a2 && a1>a3){
	   mayor=a1;
   }

   if (a2>a1 && a2>a3){
	   mayor=a2;
   }
	if (a3>a1 && a3>a2){
	  mayor=a3;
	}

	cout<<"El mayor es : "<<mayor<<endl;


	system("PAUSE");
	return 0;
}