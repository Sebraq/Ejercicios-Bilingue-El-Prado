#include<iostream>
#include <conio.h>
#include <cstdio>
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

int main(){
	int con1, con2,n, sii,x2,  lol;
con1 = 10;
con2 = 0;
sii = 0;
lol=0;

for (int i = 0; i < 4; i += 1) {
con1 = con1 - 2;
n = 0;
for (int a = 1; a < con1; a += 1) {
Sleep(100);
n = n + 2;
gotoxy(i + 10, n + sii + 5);
printf("*");
}
sii = sii + 2;
}
 sii= 0;
 for(int i = 0; i < 7; i += 1) {
lol = lol + 1;
x2 = 0;
if (i <= 3) {
con2 = con2 + 1;
}
}
system("pause");
return 0;
}