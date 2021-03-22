#include <iostream>
#include <Windows.h>
#include <math.h>
#include <cstdio>
#include <dos.h>
#include <string>
 using namespace std;
 int main(){
	 int valor[20],may,men,i;
	 may=0;
	 cout<<"Ingrese 20 valores"<<endl;
	 for (i=0;i<20;++i){
		 cin>>valor[i];
		 if (may<valor[i]){
			 may=valor[i];
		 }
	 }
	 men=may;
	 for (i=0;i<20;++i){
		 
		 if (men>valor[i]){
			 men=valor[i];
		 }
	 }
	 cout<<"El mayor es : "<<may<<endl;
	 cout<<"El menor es : "<<men<<endl;

	 system("PAUSE");
	 return 0;
 }