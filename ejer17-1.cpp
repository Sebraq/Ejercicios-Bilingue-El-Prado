#include<iostream>
#include<math.h>
#include<conio.h>
#include<cstdio>
#include <Windows.h>

using namespace std;
int main(){
int i,j,k,n;
cout<<"\t\t\tRombo"<<endl;
cout<<"Ingrese un numero : ",cin>>n;
for(i=1;n-1>=i;++i){
	for(j=n;j>=i;--j){
		cout<<" ";
	}
	for(k=1;2*i-1>=k;++k){
		Sleep(100);
		cout<<"*";
	}
	cout<<endl;
}
for(i=1;n>=i;++i){
	Sleep(100);
	for(j=1;j<=i;++j){
		cout<<" ";
	}
	for(k=2*n-1;2*i-1<=k;--k){
		Sleep(100);
		cout<<"*";
	
	}
	cout<<endl;
}
cout<<"\n"<<endl;
system("pause");
return 0;

}



