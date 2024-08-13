#include <iostream>
using namespace std;
int main(){
    int m, d;
    cout << "ingrese el mes: ";
    cin >> m;
    cout << "ingrese el dia: ";
    cin >> d;
    if(d>=21){
        m++;
    }
    switch(m){
        case 1:
        case 2:
        case 3:
        cout << "la estacion es verano: ";
        break;
        case 4:
        case 5:
        case 6:
        cout << "la estacion es otoño: ";
        break;
        case 7:
        case 8:
        case 9:
        cout << "la estacion es invierno: ";
        break;
        case 10:
        case 11:
        case 12:
        cout << "la estacion es primavera: ";
        break;
        case 13:
        cout << "la estacion es verano: ";
        break;
    }
    return 0;
}
