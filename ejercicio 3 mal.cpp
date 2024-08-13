#include <iostream>

using namespace std;

int main() {
    // Declaración de variables
    float salario_anterior, nuevo_salario, salario_total;
    int meses_trabajados = 3; // Número de meses trabajados
    float incremento_porcentaje = 0.05; // Incremento mensual del 5%

    // Solicitar al usuario el salario anterior
    cout << "Ingrese el salario anterior del obrero: $";
    cin >> salario_anterior;

    // Calcular el nuevo salario con el incremento mensual
    nuevo_salario = salario_anterior * (1 + incremento_porcentaje);

    // Calcular el salario total de los meses trabajados
    salario_total = nuevo_salario * meses_trabajados;

    // Mostrar el nuevo salario y el salario total
    cout << "El nuevo salario del obrero es: $" << nuevo_salario << endl;
    cout << "El total cobrado en los " << meses_trabajados << " meses con el nuevo salario es: $" << salario_total << endl;

    return 0;
}
