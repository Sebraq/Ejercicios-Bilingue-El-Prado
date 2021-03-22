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
   int a1,a2,a3,a4,mayor,menor;
	cout<<"Ingrese un valor"<<endl;
   cin>>a1;
   cout<<"Ingrese un valor"<<endl;
   cin>>a2;
   cout<<"Ingrese un valor"<<endl;
   cin>>a3;
   cout<<"Ingrese un valor"<<endl;
   cin>>a4;
   //Mayor
   if (a1>a2 && a1>a3 && a1>a4){
	   mayor=a1;
   }

   if (a2>a1 && a2>a3 && a2>a4){
	   mayor=a2;
   }
	if (a3>a1 && a3>a2 && a3>a4){
	  mayor=a3;
	}
	if (a4>a1 && a4>a2 && a4>a3){
	  mayor=a4;
	}
	//fin
	//Menor
	if (a1<a2 && a1<a3 && a1<4){
	   menor=a1;
   }

   if (a2<a1 && a2<a3 && a2<a4){
	   menor=a2;
   }
	if (a3<a1 && a3<a2 && a3<a4){
	  menor=a3;
	}
	if (a4<a1 && a4<a2 && a4<a3){
	  menor=a4;
	}
	//fin
	cout<<"El mayor es : "<<mayor<<endl;
	cout<<"El menor es : "<<menor<<endl;


	system("PAUSE");
	return 0;
}