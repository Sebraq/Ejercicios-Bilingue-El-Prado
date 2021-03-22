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
int valores[15],s,a;
s=0;
cout<<"Introdusca 15 valores"<<endl;
for(a=1;a<=15;++a){
cin>>valores[a];
s+=valores[a];
}
cout<<"La sumatoria es: "<<s<<endl;
system("PAUSE");
return 0;
}
