#include <iostream>
#include <cstdio>
#include <string>
#include <dos.h>
#include <Windows.h>

using namespace std;
int main(){
int a,b,c;
cout<<"Base del triangulo"<<endl;
cin>>a;
cout<<"Altura del triangulo"<<endl;
cin>>b;
c=(a*b)/2;
cout<<"El area es; "<<c<<endl;

system("PAUSE");
return 0;
}