#include <iostream>
#include <cstdio>
#include <conio.h>
#include <Windows.h>
using namespace std;
void gotoxy(int x, int y) {
HANDLE hcon;

hcon = GetStdHandle(STD_OUTPUT_HANDLE);
COORD dwPos;
dwPos.X = x;
dwPos.Y = y;
SetConsoleCursorPosition(hcon, dwPos);
}
int main() {
int  con, cuan, ce, el, see, ras;
con = 0;



cuan = 0;
el = 0;
see = 0;
ras = 0;

for (int i = 0; i < 7; i += 1) {
el = el + 1;
if (el <= 4) {
for (ce = 0; ce < el; ce += 1) {
Sleep(100);
gotoxy(38 + cuan + see, ras + 7);
printf("*");
cuan = cuan + 2;
}
if (el <= 3) {
see = see - 3 + (-2 * (el - 1));
}
else {
see = see - 3 + (-2 * con);
}
con = con + 1;
ras = ras + 2;
}
else {
for (ce = 0; ce < el; ce += 1) {
Sleep(25);
gotoxy(38, (el * 2) + 5);
printf("*");
}
}
}
system("pause");
}