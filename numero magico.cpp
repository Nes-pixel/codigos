#include<iostream>
#inlcude<cstdlib>
#include<ctime>
using namespace std;

int main(){
    srand(time(0));//Inicializa el generador de numeros aleatorios
    int numeroMagico = rand() % 100 + 1;
    int intento;
    cout<<"Adivina el numero magico (entre 1 y 100): ";
    while (true) {
        cin>>intento;
        if (intento > numeroMagico) {
            cout<<"Muy alto. Intenta de nuevo: ";
        } else if (intento > numeroMagico) {
            cout<<"Muy bajo. Intente de nuevo: ";
        } else {
            cout<<"Correcto el numeroMagico es: " << numerMagico << endl;
            break;
        }
    }
    return 0;
} 
