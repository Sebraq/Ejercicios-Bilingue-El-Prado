#include<math.h>
#include<dos.h>
#include<conio.h>
#include<WINDOWS.H>
#include<string>
#include <iostream>

using namespace std;

int main() {
int numero, valor, dato, mayor, menor=100000000000 , sumd, c, s = 0,cont;
mayor=0;


cout << "Ingrese la opcion que mas le convenga. " << endl;
cout << "1. Mayor y menor de varios numeros. " << endl;
cout << "2. Sumatoria de  numeros. " << endl;
cout << "3. Para salir del programa. " << endl;
cin >> valor;

switch (valor) {

case 1:

cout << "ingrese la cantidad de datos que desea calcular. ";
cin >> numero;

for (int i = 1; i <= numero; i++) {
cin >> dato;

if (dato > mayor) {
mayor = dato;
}

if (dato < menor) {
menor = dato;
}

}

cout << "El numero mayor es: " << mayor << endl;
cout << "El numero menor es: " << menor << endl;

break;

case 2:
cout << "ingrese la cantidad que desea operar: ";
cin >> sumd;

for ( cont = 1; cont<= sumd; cont++) {
cin >> c;
s = s + c;

}

cout << "La suma de los valores ingresados es: " << s << endl; break;

case 3:

return 0;

}

system("pause");
return 0;
}