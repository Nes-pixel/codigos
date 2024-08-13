#include<iostream>
#include<string>
using namespace std;
int main(){
	int ht, ph, ps;
	string n;
	cout << "Ingrese el nombre del usuario: "; getline(cin, n);
	cout << "Ingrese las horas trabajadas: "; cin >> ht;
	cout << "Ingrese el pago por horas: "; cin >> ph;
	
	if (ht<=40){
		ps = ph * ht;
	}
	else
	{
		ps = (40 * ph) + (ht - 40) * ph * 2;
	}
	 cout << "El pago semanal de " << n << " es de: " << ps;
	 
	 return 0;
	
}

