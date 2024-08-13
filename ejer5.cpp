#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double Y, x;
	cout << "Ingrese el valor de Y: "; cin >> Y;
	if ((Y >= 0)&&(Y<= 10)){
		x = 4/Y - Y;
	}else if ((Y>10)&&(Y<=25)){
		x = pow(Y, 3) - 12;
	}else if ((Y>25)&&(Y<=50)){
		x = pow(Y, 2) + (pow(Y, 3) - 18);
	}else {
		x = 0;
	}
	cout << "El valor de la variable x es: " << x << endl;
	return 0;
}

