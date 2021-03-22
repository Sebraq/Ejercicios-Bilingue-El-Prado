#include <iostream>

using namespace std;
int  main(){
	int no,valor,iva,comi,total,u,k,total2,utilidad,ut;
	total=0;
	cout<<"Cuantas ventas realizo?"<<endl;
	cin>>u;
	for(k=1;k<=u;++k){
		cout<<"Valor de la venta ?"<<" "<<k<<" "<<endl;
		cin>>valor;
		total=total+valor;
		comi=valor*0.15;
		iva=valor*0.12;
		cout<<"Comision del vendedor: "<<comi<<endl;
		utilidad=valor-(valor*0.70);
		cout<<"La utilidad es: "<<utilidad<<endl;
		cout<<"El iva es: "<<iva<<endl;
	}
	cout<<endl;
	ut=total-(total*.70);
	cout<<"Monto total es: "<<total<<endl;
	cout<<"Utilidad total es: "<<ut<<endl;
	cout<<endl;
	system("pause");
	return 0;
}
	

