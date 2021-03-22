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
	 double a,b,c;
	 c=0;
	 cout<<"Que numero quiere que se multiplique?"<<endl;
	 cin>>a;
	 cout<<endl;
	 for(b=1;b<=50;++b){
		 c=a*b;
		 cout<<a<<" * "<<b<<" = "<<c<<endl;
		 Sleep(100);
	 }
	 system("PAUSE");
	 return 0;

 }