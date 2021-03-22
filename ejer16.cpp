#include <iostream>
#include <Windows.h>
#include <math.h>
#include <cstdio>
#include <dos.h>
#include <string>
 using namespace std;
 int main(){
	 int valores[30],a,b,c1,c2;
	 c1=0;
	 c2=0;
	 cout<<"Ingrese los valores teniendo de limite el numero 50"<<endl;
	 for(a=0;a<30;++a){
		 cin>>b;
		 if (b>50){
			 cout<<"El numero es mayor de 50,porfavor lea bien -_-"<<endl;
		 }else{
			 if (b<25){
				 cout<<b<<" es menor de 25"<<endl;
				 c1=c1+1;
			 }
			 if(b>=25 && b<=50){
				 cout<<b<<" es mayor o igual a 25"<<endl;
				 c2=c2+1;
			 }
		 }
	 }
	 cout<<endl;
	 cout<<"Mayores de 25 : "<<c2<<endl;
	 cout<<"Menores de 25 : "<<c1<<endl;
	 cout<<endl;
	 system("PAUSE");
	 return 0;
 }
