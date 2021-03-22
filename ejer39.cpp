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
int i,a,b,c;
a=0;
for(i=0;i<=30;++i){
	if (i % 2==1){
		cout<<i<<endl;
		a+=i;
	}
}
cout<<"La suma de los valores es : "<<a<<endl;
system("PAUSE");
return 0;
}