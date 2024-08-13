#include <iostream>

using namespace std;

int main() {
    // Declaración de variables
    float horas_trabajadas, pago_por_hora, salario_anterior,incremento_mensual,nuevo_salario,meses_trabajados,total_cobrado;

    // Solicitar al usuario las horas trabajadas y el pago por hora
    cout << "Ingrese el número de horas trabajadas en la semana: ";
    cin >> horas_trabajadas;

    cout << "Ingrese el pago por hora: ";
    cin >> pago_por_hora;

    // Calcular el salario anterior
    salario_anterior = horas_trabajadas * pago_por_hora;

    // Mostrar el resultado
    cout << "El salario anterior del trabajador es: $" << salario_anterior << endl;

    // Solicitar al usuario el salario anterior y el incremento mensual
    cout << "Ingrese el salario anterior: ";
    cin >> salario_anterior;
    
    cout << "Ingrese el incremento mensual: ";
    cin >> incremento_mensual;
    
    // Calcualr el nuevo salario
    nuevo_salario = (incremento_mensual * salario_anterior) + salario_anterior
    
    // Mostrar el resultado
    ;cout << "El nuevo salario es: $" << nuevo_salario << endl;
    
	// Solicitar al usuario nuevo salario y meses trabajados
	cout << "Ingrese el nuevo salario: ";
	cin >> nuevo_salario;
	
	cout << "Ingrese los meses trabajados: "
	;cin >> meses_trabajados;
	
	// Calcular el total cobrado
	total_cobrado = nuevo_salario * meses_trabajados
	
	// Mostrar el resultado
	;cout << "El total cobrado es: $" <<total_cobrado << endl; 
	return 0;
}
