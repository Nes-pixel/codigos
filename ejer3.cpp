#include<iostream>
using namespace std;
int main(){
	int pp, pi, pt;
	cout << "Ingrese el precio del prudcto: "; cin >> pp;
	
	pi = pp - 20;
	
	if(pp > 500 )
	{
		pi = (pi - 20) * 0.4 + 20 * 0.3;
	}
	else
	{
		pi = (pi - 20) * 0.4 + 20 * 0.3;
	}
	pt = pp + pi;
	cout << "El precio total mas impuestos es de: " << pt;
	
	return 0;
}
