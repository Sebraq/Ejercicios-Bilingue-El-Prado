#include <iostream>
#include <cstdio>
#include <string>
#include <dos.h>
#include <Windows.h>

using namespace std;
int main(){
	int a ,par,imp;
	par=0;
	imp=0;
	for(a=1;a<=200;++a){
		if(a % 2 == 0){
			cout<<"El numero "<<a <<" es par"<<endl;
	}else{
		cout<<"El numero "<<a<<" es impar"<<endl;
		}
		if(a % 5 == 0 ){
			cout<<"El numero es multipo de 5 : "<<a<<endl;
		}else{
		    cout<<"El numero NO es multipo de 5 : "<<a<<endl;
		}
	}


		system("PAUSE");
		return 0;
}