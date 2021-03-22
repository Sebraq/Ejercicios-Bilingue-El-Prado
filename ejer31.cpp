#include<iostream>
#include<math.h>
#include<dos.h>
#include<conio.h>
#include<WINDOWS.H>
#include<string>

void gotoxy(int x, int y) {
HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
COORD dwpos;
dwpos.X = x;
dwpos.Y = y;
SetConsoleCursorPosition(hcon, dwpos);
}

using namespace std;

int main() {
string nombre, dir;
int tarifa, cont, gastado;
double pe, cuota, sub, iva, total, multi;

gotoxy(25, 0);
cout << "Ingrese los datos que desee calcular " << endl;;

gotoxy(1, 1);
cout << "Ingrese su nombre: " << endl;
cin >> nombre;

gotoxy(1, 3);
cout << "Ingrese su direccion: " << endl;
cin >> dir;

gotoxy(1, 5);
cout << "Ingrese NO. de contador: " << endl;
cin >> cont;

gotoxy(1, 7);
cout << "Ingrese el numero de tarifa: " << endl;
cin >> tarifa;

switch (tarifa) {
	system("cls");
case 1:
gotoxy(1, 9);
cout << "Ingrese los KWS que ha gastado en la residencia: " << endl;
cin >> gastado;

gotoxy(1, 12);
cout << "Nombre del cliente: " << nombre << endl;

gotoxy(1, 14);
cout << "Direccion del cliente: " << dir << endl;

gotoxy(1, 16);
cout << "Numero de contador: " << cont << endl;

gotoxy(1, 18);
cout << "Numero de tarifa: " << tarifa << endl;

gotoxy(3, 20);
cout << "Usted tiene derecho a la cantidad de 325 KWS" << endl;

if (gastado > 325){
pe = gastado - 325;

gotoxy(60, 20);
multi = pe * 1.50;
cout << "Usted ha gastado: " << multi << " de mas. " << endl;

}
else {

gotoxy(60, 22);
cout << "Los KWS gastados de mas: ";
multi = 0;
}

gotoxy(60, 22);
cuota = 175;
cout << "La cuota a pagar es de: " << cuota << endl;;

gotoxy(60, 24);
cout << "Pago extra: " << multi;

gotoxy(60, 26);
sub = cuota + multi;
cout << "Subtotal: " << sub;

gotoxy(60, 28);
iva = sub * 0.12;
cout << "IVA: " << iva;

gotoxy(60, 30);
total = sub + iva;
cout << "El total es de: " << total << endl; break;

case 2:

gotoxy(1, 9);
cout << "Ingrese los KWS que ha gastado en la localidad " << endl;
cin >> gastado;

gotoxy(1, 12);
cout << "Nombre del cliente: " << nombre << endl;

gotoxy(1, 14);
cout << "Direccion del cliente: " << dir << endl;

gotoxy(1, 16);
cout << "Numero de contador: " << cont << endl;

gotoxy(1, 18);
cout << "Numero de tarifa" << tarifa << endl;

gotoxy(3, 20);
cout << "Tiene derecho a 550 KWS" << endl;

if (gastado > 550){
pe = gastado - 550;

gotoxy(25, 8);
multi = pe * 1;
cout << "Usted ha gastado: " << multi << " de mas. " << endl;
}
else {
gotoxy(60, 21);
cout << "Los KWS gastados de mas: 0 ";
multi = 0;

}

gotoxy(60, 22);
cuota = 400;
cout << "La cuota a pagar es de: " << cuota;

gotoxy(60, 24);
cout << "Pago extra: " << multi;

gotoxy(60, 26);
sub = cuota + multi;
cout << "Subtotal: " << sub;

gotoxy(60, 28);
iva = sub * 0.12;
cout << "IVA: " << iva;

gotoxy(60, 30);
total = sub + iva;
cout << "El total es: " << total << endl; break;

case 3:
gotoxy(1, 5);
cout << "Ingrese los KWS gastados ";
cin >> gastado;

gotoxy(1, 6);
cout << "Nombre del cliente: " << nombre << endl;

gotoxy(1, 8);
cout << "Direccion del cliente: " << dir << endl;

gotoxy(1, 10);
cout << "Numero de contador: " << cont << endl;

gotoxy(1, 12);
cout << "Numero de tarifa" << tarifa << endl;

gotoxy(25, 6);
cout << "Tiene derecho a 800 KWS";

if (gastado > 800){
pe = gastado - 800;
gotoxy(25, 8);
multi = pe * 0.50;
cout << "Usted ha gastado: " << multi << "de mas. " << endl;
} else {
gotoxy(25, 8);
cout << "Los KWS gastados de mas: 0";
multi = 0;
}

gotoxy(25, 10);
cuota = 900;
cout << "Cuota a pagar: " << cuota;

gotoxy(25, 12);
cout << "Pago extra: " << multi;

gotoxy(16, 14);
sub = cuota + multi;
cout << "Subtotal: " << sub;

gotoxy(16, 16);
iva = sub * 0.12;
cout << "IVA: " << iva;

gotoxy(16, 18);
total = sub + iva;
cout << "total: " << total << endl; break;

default: cout << "INGRESE ALGUNA DE LAS OPCIONES VALIDAS, POR FAVOR. " << endl; break;

cout << endl;
}
cout << endl;
system("pause");
return 0;
}