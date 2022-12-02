/*Realice un programa que resuelva: en la picina marcel (se cancela un monto de inscripcion de 75bs pero adicional mente debe
cancelar el pago de los aseadores que es un 20% del precio de la inscripcion y el pago flotante que utilizara el usiario con un valor del 5%
del valor de la inscripcion)*/

#include <iostream>
#include <cstdlib>
#include <math.h> 
using namespace std; 

int main(){
    float inscripcion=75, pag1=0.20, pag2=0.5, result = 0;

    pag1 = inscripcion * pag1;
    pag2 = inscripcion = pag2;

    cout<<"el pago de los aseadores es: "<<pag1<<endl;
    cout<<"el pago flotante es: "<<pag2<<endl;
    result = inscripcion + pag1 + pag2
	cout<<"el total a pagar el usuario es: "<<result<<endl;



    return 0;
}
