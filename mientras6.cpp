#include<iostream>
using namespace std;
int main (){
    int n, d;
	cout<<"ingrese el numerador: ";
	cin>>n;
	cout<<"ingrese el denominador: ";
	cin>>d;
	
	int mi;
	if (n<d){
		mi = n;
	}else{
		mi = d;
	}
	int i=mi;
	while (i>1){
		if(n%i==0 && d%i==0){
			n = n/i;
			d = d/i;
		}
		i--;
	}
	cout<<"la expresion minima de la fraccion es: "<<n<<"/"<<d;
	
	 
    return 0;
  }
