#include<iostream>
using namespace std;

int main(){
	int numero;
	int suma =0;
	
	cout<<"Ingrese un numero: ";
	cin>>numero;
	
	while(numero>=0){
		suma=suma+numero;
		cout<<"Ingrese un numero: ";
		cin>>numero;
	}
	
	cout<<"\nLa suma de los numeros positivos introducidos es: "<<suma;
	cout<<endl;
	return 0;
}
