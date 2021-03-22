#include <iostream>
#include <Windows.h>
#include <math.h>
#include <cstdio>
#include <dos.h>
#include <string>
 using namespace std;
 int main(){
	 int v,may,men,i,k,r;
	 may=0;
	 
	 men=may;
	 cout<<"Cuantos valores quiere ingresar?"<<endl;
	 cin>>k;
	 cout<<endl;
	 cout<<"Ingrese los valores"<<endl;
	 for (i=0;i<k;++i){
	 cin>>v;
	 
		if(i==0){
			may=v;
			men=v;
		}else{
			if(v>may) may=v;
			if(v<men) men=v;
		}
	 }

	 cout<<endl;
	 r=may-men;
	 cout<<"El mayor es : "<<may<<endl;
	 cout<<"El menor es : "<<men<<endl;
	 cout<<"La diferencia es de : "<<r<<endl;
	 cout<<endl;

	 system("PAUSE");
	 return 0;
 }