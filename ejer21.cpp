#include <iostream>
#include <string>

using namespace std;
int main(){
	string nombre;
	int edad,sexo,estado;
	cout<<"Su nombre? ",cin>>nombre;
	cout<<"Su edad? ",cin>>edad;
	cout<<"Su sexo? 1.Hombre 2.Mujer ",cin>>sexo;
	cout<<"Su estado? 1.Soltero 2.Casado 3.Otro ",cin>>estado;
	if(edad<18){
		cout<<"\n";
		cout<<nombre<<" usted no se manda solo"<<endl;
		cout<<"\n";
	}else{
	if (sexo==1 && estado==2){
		cout<<"\n";
		cout<<nombre<<" usted no se manda solo"<<endl;
		cout<<"\n";
	}else{
		cout<<nombre;
	}
	}
	cout<<"\n";
	system("pause");
	return 0;
}
