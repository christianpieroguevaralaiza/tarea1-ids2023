//Programa de busque lineal en un arreglo de vectores
#include <iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
void Buscador (int Matriz[],int n){
	int E,i=0;
	char bandera='F';
	cout<<"Digite el elemento a buscar: ";
	cin>>E;
	while(i<n && bandera=='F'){
		if(E==Matriz[i]){
			bandera='V';
			cout<<"El numero se encuentra en la posicion "<<i+1;
		}
		i++;
	}
	if(bandera=='F'){
		cout<<"El numero no se encuentra en el arreglo ";
	}
}
int Buscador_lineal(){
	int n,opc,bandera=0,i;
	cout<<"Digite el tamanio (n) del vector: ";
	cin>>n;
	cout<<"Digite una opcion: 1) Vector llenado aleatoriamente con un rango arbitrario 2) Vector llenado por el usuario";
	cin>>opc;
	do {
		switch(opc){
			case 1: {
				int min,max,A[1000];
				cout<<"rango minimo: ";cin>>min;
				cout<<"rango maximo: ";cin>>max;
				srand(time(NULL));
					for(i=0;i<n;i++){
						A[i]=min+rand()%max+1-min;
						cout<<A[i]<<"   ";
				}
				Buscador(A,n);
				bandera=1;
				break;
			}
			case 2: {
				int A[1000];
				for(i=0;i<n;i++){
					cout<<"Digite un numero: ";cin>>A[i];
				}
				for(i=0;i<n;i++){
					cout<<A[i]<<"   ";
				}
				Buscador(A,n);
				bandera=1;
				break;
			}
			default: {
				cout<<"Digite una opcion valida";
				break;
			}
		}
	} while(bandera==0);
	return 0;
}
