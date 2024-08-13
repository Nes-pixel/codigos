#include <iostream>
using namespace std;
int main(){
    int hextras; 
    double sueldo, pextras, phorasextras, ptotal; 
    char categoria;
    
    cout << "ingrese la categoria correspondiente (A, B, C, D): ";
    cin >> categoria;
    cout << "ingrese las horas extras: ";
    cin >> hextras;
    cout << "ingrese el sueldo base: ";
    cin >> sueldo;
    
    switch (categoria) {
        case 'A' : pextras = 10; 
        break;
        case 'B' : pextras = 20; 
        break;
        case 'C' : pextras = 50;
        break;
        case 'D' : pextras = 100;
        break;
        default:
        cout << "no se encuentra entre las categorias: " << endl;      
    }
    if (hextras <= 30){
    	phorasextras = hextras * pextras;
	}
	else {
		phorasextras = 30 * pextras + (hextras - 30) * 30;
	}
     
    ptotal = sueldo + phorasextras;
    cout << "el pago total es: " << ptotal;
    
    return 0;
}
