#include <iostream>
using namespace std;

int main() {
    int seg, sem, dias, horas, min, seg_rest;

    cout<<"Ingrese la cantidad de segundos: ";
    cin>>seg;
 
    //Se desglosa en semanas, días, horas, minutos y segundos
    sem = seg / 604800;  //1 semana = 7 días * 24 horas * 60 minutos * 60 segundos
    seg_rest = seg % 604800; //calcula los segundos restantes
    dias = seg_rest / 86400;  //1 día = 24 horas * 60 minutos * 60 segundos
    seg_rest = seg_rest % 86400; //se actualiza los segundos restantes
    horas = seg_rest / 3600;  //1 hora = 60 minutos * 60 segundos
    seg_rest = seg_rest % 3600;
    min = seg_rest / 60;  //1 minuto = 60 segundos
    seg_rest = seg_rest % 60;

    
    cout<<"Desglose de segundos ingresados:" << endl;
    cout<<sem<< " semana(s), "<<dias<<" dia(s), "<<horas<<" hora(s), "<<min<<" minuto(s) y "<<seg_rest<<" segundo(s)"<<endl;

    return 0;
}



	 
