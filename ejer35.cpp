#include<conio.h>
#include<stdlib.h>
#include<windows.h>
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

 

	int h,m,s;

for(h=0; h<=24; h++){

	for(m =0; m<=59; m++){

		for(s=0; s<=59; s++){

			cout <<"\t\t\t" <<h <<" Horas"<< ":" << m<<" Minutos" << ":" << s<< " Segundos" << endl;

			Sleep(1000); 

			system("cls");// limpiar consola

		}

	}

}

 

 

 

	system("PAUSE");

	return 0;
}