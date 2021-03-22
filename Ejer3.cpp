#include <iostream>
#include <math.h>
#include <windows.h>
#include <string>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main(){
	int a;

	cout<<"Ingrese un valor"<<endl;
	cin>>a;
	if (a>0) {
		cout<<"Su numero es positivo"<<endl;
	}
	if (a<0){
		cout<<"Su numero es negativo"<<endl;
	}
	if (a==0){
		cout<<"Su numero es igual a 0"<<endl;
	}

	system("PAUSE");
	return 0;
}

