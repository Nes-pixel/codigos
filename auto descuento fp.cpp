#include <iostream>
using namespace std;
int main(){
    
    int categoria;
    float precio, descuento, valord, valorf;
    cout << "ingrese la categoria del vehiculo (1-4): ";
    cin >> categoria;
    cout << "ingrese el precio del vehiculo: ";
    cin >> precio;
    switch(categoria){
        case 1 : descuento = 0.08 ;
        valord = precio * descuento;
        break;
        case 2 : descuento = 0.05 ; 
        valord = precio * descuento;
        break;
        case 3 : descuento = 0.03 ;
        valord = precio * descuento;
        break;
        case 4 : descuento = 0.09 ; 
        valord = precio * descuento;
        break;
        default : cout << " categoria inexistente: " <<endl;
    }
    
    valorf = precio - valord;
    cout << "el valor final es: " << valorf;
    
    return 0;
}

