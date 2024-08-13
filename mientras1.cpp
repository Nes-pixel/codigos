#include<iostream>
using namespace std;

int main(){
	
	int edades=0, Nest=0, x;
	
	while(Nest<40){
		cout<<"Ingrese la edad: ";
		cin>>x;
		Nest = Nest + 1;
		edades = edades + x;
	}
	
	cout<<"\nLa suma de las edades de estudiantes del 1er ciclo es: "<<edades;
	cout<<endl;
	return 0;
}

