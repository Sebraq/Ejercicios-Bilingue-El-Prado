#include <iostream>
#include <Windows.h>
#include <math.h>
#include <cstdio>
#include <dos.h>
#include <string>
 using namespace std;

 int main(){
	 int i,a;
	 cout<<"Hasta que numero desea visualizar?"<<endl;
	 cin>>a;
	cout<<" "<<endl;
	cout<<"Los numeros que deseo visualizar : "<<endl;
	 for (i=1;i<=a;++i){
		 cout<<i<<endl;
	 }
 
	 system("PAUSE");
	 return 0;
 }