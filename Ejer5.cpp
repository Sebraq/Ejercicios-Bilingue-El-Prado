#include <iostream>
#include <math.h>
#include <windows.h>
#include <string>
#include <stdlib.h>
#include <conio.h>

using namespace std;
 int main(){
	 int a,b;
	 cout<<"Ingrese un valor"<<endl;
	 cin>>a;
	 cout<<"Ingrese otro valor"<<endl;
	 cin>>b;
	 cout<<" "<<endl;
	 if (a>b){
		 cout<<a<<" es el valor mayor"<<endl;
		 cout<<b<<" el el valor menor"<<endl;
	 }else{
		 cout<<b<<" es el valor mayor"<<endl;
		 cout<<a<<" es el valor menor"<<endl;
	 }

		 system("PAUSE");
		 return 0;

 }