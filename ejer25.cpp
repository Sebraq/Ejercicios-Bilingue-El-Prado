#include <iostream>
#include <math.h>
#include <windows.h>
#include <string>
#include <stdlib.h>
#include <conio.h>
using namespace std;

void gotoxy(int x,int y){  
      HANDLE hcon=GetStdHandle(STD_OUTPUT_HANDLE);;  
         
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
	  SetConsoleCursorPosition(hcon,dwPos); 
}
int main(){
	string nombre;
	int cont;
	double valor[200];
	gotoxy(5,1);
	cout<<"NOMBRE";
	gotoxy(15,1);
	cout<<"Sueldo";
	gotoxy(25,1);
	cout<<"BONOS";
	gotoxy(35,1);
	cout<<"Horas";
	gotoxy(45,1);
	cout<<"ISR";
	gotoxy(55,1);
	cout<<"IGSS";
	gotoxy(65,1);
	cout<<"Sueldo Extra";
	gotoxy(75,1);
	cout<<"Sueldo liquido";
	
	for(cont=1;cont<=10;++cont){
    gotoxy(5,cont+1);
	cin>>nombre;
	 gotoxy(15,cont+1);
	cin>>valor[0];
	 gotoxy(25,cont+1);
	cin>>valor[1];
	 gotoxy(35,cont+1);
	cin>>valor[2];
	 gotoxy(45,cont+1);
	if(valor[0]>3000){
		valor[5]= (valor[0]*5)/100;
		cout<<valor[5];

	}else{
		valor[5]=0;
	}
	valor[4]=(valor[0]*4.83)/100;
	 gotoxy(55,cont+1);
	cout<<valor[4];
	valor[6]=(valor[0]/30)/8;
	valor[7]=valor[6]*valor[2];
    gotoxy(65,cont+1);
	cout<<valor[7];
	valor[8]=valor[0]+valor[1]+valor[7]-valor[4]-valor[5];
	//sueldo+bonos+se-igss-isr;
	gotoxy(75,cont+1);
	cout<<valor[8];
	}
	cout<<""<<endl;
	
	 

    system("PAUSE");
	return 0;
}