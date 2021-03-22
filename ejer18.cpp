#include <iostream>

using namespace std;
int main(){
	double a,b,c;
	cout<<"Precio del curso "<<endl;
	cin>>a;
	b=a*0.25;
	c=(a-b)/12;
	cout<<"El 25% del curso es : "<<b<<" La cuato mensual seria : "<<c<<endl;
	cout<<"\n";
	system("pause");
	return 0;
}