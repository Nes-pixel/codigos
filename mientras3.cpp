#include <iostream>
using namespace std;
int main() {
    int minimo, maximo;
    cout << "Ingrese el numero minimo: ";
    cin >> minimo;
    cout << "Ingrese el numero maximo: ";
    cin >> maximo;
	int numero;
	cout << "Ingrese un numero entre el maximo y el minimo: ";
    cin >> numero;
    int intentos_exitosos = 0;

    while (minimo<=numero && numero<=maximo) {
    intentos_exitosos=intentos_exitosos+1;
    cout <<"Ingrese un numero entre el maximo y el minimo: ";
    cin>>numero;
    }
    cout << "La cantidad de intentos exitosos fue: " << intentos_exitosos << endl;

    return 0;
}


