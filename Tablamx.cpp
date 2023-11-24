//programa:Tablamx.cpp
//autor:katherine oviedo
//fecha:24-11-2023
#include<iostream>
using namespace std;
int main()
{
	int numero;
	cout<<"Ingrese un numero para mostrar su tabla de multipicar:";cin>>numero;
	cout<<"Tabla de multiplicar del"<< numero<<":"<<endl;
	int z= 1;
	do{
		cout<<numero<<"x"<<z<<"="<<numero * z<<endl;
	}	while(z<=10);
	return(0);
}
