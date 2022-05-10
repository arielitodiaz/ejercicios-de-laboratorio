//hacer un programa para ingresar por teclado 2 numeros
//y luego mostrar por pantalla la diferencia
//absoluta entre ambos. ejemplo: si se ingresa 3 y 8
// se emite por pantalla 5
// si se ingresar 8 y 3 se emite 5
// si se ingresa -3 y -9 se emite 12. si se ingresa -12 y -1 se emite 11//


#include <iostream>

using namespace std;

int main(){
    int a, b, n;
    cout << "ingrese el primer" << endl;
    cin >> a;
    cout << "ingrese el segundo numero" << endl;
    cin >> b;
    if (a>b)
    {
        n=a-b;
        cout << "la diferencia absoluta es:" << n << endl;

    }
    if (b>a)
    {
        n= b-a;
        cout << "la diferencia es:" << n << endl;
    }
    return 0;
}
