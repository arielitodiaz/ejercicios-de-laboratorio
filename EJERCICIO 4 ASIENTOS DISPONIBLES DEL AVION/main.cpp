//**INGRESAR POR TECLADO LA CANTIDAD DE ASIENTOS
//DISPONIBLES EN UN AVION Y LA CANTIDAD DE PASAJES OCPADOS  Y LUEGO
//CALCULAR E INFORMAR EL PORCENTAJE DE OCUPACION Y EL PORCENTAJE DE ASIENTOS
//DISPONIBLES DEL MISMO**//

#include <iostream>

using namespace std;

int asdisp, pasajesvendidos, porcentajedeocupacion, porcentajedesocupado, aux=100;
int main()
{
    cout <<"BIENVENIDOS" << endl;
    cout << "por favor ingrese la cantidad de asientos disponibles "<<endl;
    cin >> asdisp ;
    cout << "por favor ingrese la cantidad de pasajes vendidos "<<endl;
    cin >> pasajesvendidos;

    porcentajedeocupacion=pasajesvendidos*aux/asdisp;
    porcentajedesocupado=asdisp*aux/pasajesvendidos;


    cout << "el porcentaje de ocupacion es de %" << porcentajedeocupacion <<endl;
    cout << "el porcentaje desocupado es de %" << porcentajedesocupado;

    return 0;
}
