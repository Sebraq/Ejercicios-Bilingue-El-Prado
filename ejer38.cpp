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
	int a,s,e;
	string n;
	
	cout<<"Introdusca su nombre"<<endl;
	cin>>n;
	cout<<"Introdusca el año de nacimiento"<<endl;
	cin>>a;
	cout<<"Introdusca su sexo"<<endl;
	cin>>s;

	cout<<endl;

	e=2020-a;

	if (e>18){
		cout<<n<<" puedes ir a bailar hoy por la noche."<<endl;
	}else{
		cout<<n<<" tienes que ir a dormir hoy."<<endl;
	}


	system("PAUSE");
	return 0;

}