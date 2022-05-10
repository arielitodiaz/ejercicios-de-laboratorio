#include <iostream>

using namespace std;

int  cantA, cantB, cantC, suma, aux=100 ;
float porcentA, porcenB, porcenC ;


int main() {


    cout << "ingrese cantidad de alfajores vendidos  de A"<< endl;
    cin >> cantA;
    cout <<"ingrese cantidad de añfajores vendidos de B" << endl;
    cin >> cantB;
    cout << "ingrese cantidad de alfajores vendidos de C" << endl;
    cin >> cantC;

    suma=cantA+cantB+cantC;

    porcentA=cantA*aux/suma;
    porcenB=cantB*aux/suma;
    porcenC=cantC*aux/suma;

    cout <<"el porcentaje de venta de alfajores A es de %" << porcentA <<endl;
    cout <<"el porcentaje de venta de alfajores B es de %" << porcenB <<endl;
    cout <<"el porcentaje de venta de alfajores c es de %" << porcenC <<endl;


    return 0;
}
