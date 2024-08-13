#include <iostream>
using namespace std;

int main(){
    float Pfinal, pvp, desc;

    cout<<"Ingrese el precio final del producto S/: ";
    cin>>Pfinal;

    cout<<"Ingrese el precio de venta al publico (PVP) del producto S/:";
    cin>>pvp;

    //calculando el porcentaje de descuento
    desc = ((pvp - Pfinal) / pvp) * 100;

    cout<<"El porcentaje de descuento es: "<<desc<<"%"<<endl;

    return 0;
}

