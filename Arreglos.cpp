//programa:Arreglos.cpp
//autor:katherine oviedo
//fecha:24-11-2023
#include<iostream>
using namespace std;
int main()
{
	int numeros[5];
		int suma =0;
		int z =0;
		do{
			cout<<"ingrese el valor para el elemento"<<z+1<<":";cin>>numeros[z];
			suma=suma+numeros[z];
			z++;
		} while (z<5);
		cout<<"la suma de los elementos del arreglo es:"<<suma<<endl;
		return(0);
}


