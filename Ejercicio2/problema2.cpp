#include <iostream>
#include <cstdlib>
using namespace std;
void imprimir(int arandom[], int tam){//funcion para imprimir nuestro arreglo
	for (int j=0; j<tam; j++){
		cout<<arandom[j]<<" ";
	}
}
void menor(int arandom[], int tam){//funcion para poner el valor minimo en en la posicion [0]
	int tmp;
	for (int i = 0; i < tam; i++) {
		for (int j = i+1; j < tam; j++) {
			if(arandom[i] > arandom[j]){
                		tmp = arandom[i];
                		arandom[i] = arandom[j];
                		arandom[j] = tmp;		
            }
        }
    }
}
void cambiar(int arandom[], int tam){//funcion para cambiar al nuevo valor minimo
	for(int i = 0; i< tam; i++) {
		arandom[i] = arandom[i+1];
	}
	tam = tam -1;
}
int main(){
	int tam = 6;
	int arandom[tam];
	for (int i=0; i<tam; i++){
		arandom[i] = 1+ rand() % 50;//llenamos nuestro arreglo con numeros aleatorios del 1 al 50
	}
	int x = 0;
	imprimir(arandom, tam);
	cout<<"\n";
	menor(arandom, tam);
	cout<<"\n";
	cout<<"Min"<<arandom[0]<<endl;
	for (int i=0; i<tam-1; i++){
		cout<<"Ingresar:";
		cin>>x;
		if (x==arandom[0]){
			cambiar(arandom, tam);
			cout<<"Min"<<arandom[0]<<endl;
		}
	}
	
}
