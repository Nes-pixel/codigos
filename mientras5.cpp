#include<iostream>
 using namespace std;
int main (){ 
    int a,b,i=1;
    cout<<"Ingrese el primer numero: "; cin>>a;
    cout<<"Ingrese el segundo numero: "; cin>>b;
    cout<<"Los divisores comunes de "<<a<<" y "<<b<<" es: "; 
  while(i<=a && i<=b){
    if((a%i==0)&&(b%i==0)){
        
        if (i>1){
            cout<<", "<<i;
        }else{
            cout<<i;
        }
    }
    i++;
    }
    return 0;
  }
  
