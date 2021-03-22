#include <iostream>
#include <math.h>
#include <windows.h>
#include <string>
#include <stdlib.h>
#include <conio.h>
#include <cstdio>
#include <dos.h>

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
	double  b1,b2,b3,b4,k,r,c;
	int val[500];
	k=0;
	gotoxy(5,1);
	cout<<"NOMBRE";
	gotoxy(15,1);
	cout<<"NB1";
	gotoxy(25,1);
	cout<<"NB2";
	gotoxy(35,1);
	cout<<"NB3";
	gotoxy(45,1);
	cout<<"NB4";
	gotoxy(55,1);
	cout<<"Nota Final";
	gotoxy(75,1);
	cout<<"Resultado";
	
	
	for(c=1;c<=15;++c){
    gotoxy(5,c+1);
	cin>>nombre;
	 gotoxy(15,c+1);
	cin>>val[0];
	 gotoxy(25,c+1);
	cin>>val[1];
	 gotoxy(35,c+1);
	cin>>val[2];
	 gotoxy(45,c+1);
	cin>>val[3];
	gotoxy(55,c+1);
	k=val[0]+ val[1] + val[2] + val[3];
	r=k/4;
	cout<<r;
	

	if(r>60){
		gotoxy(75,c+1);
		cout<<"Aprobado"<<endl;

	}else{
		gotoxy(75,c+1);
		cout<<"Reprobado"<<endl;
	}
	
	}
	cout<<endl;
	
	

    system("PAUSE");
	return 0;
}