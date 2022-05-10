// hacer un progrma para ingraser por teclado ,
// un numero y leguo emitir por pantalla un cartel aclaratorio indicando
// si el mismo es positivo, negativo o cero.
#include <iostream>

using namespace std;

int main(){
    int  n;
    cout << "ingrese el numero" <<endl;
    cin >> n;
    if (n>0)
    {
        cout << "el numero es positivo" <<endl;

    }
    if (n<0)
    {
        cout << "el numero es negativo" <<endl;
    }
    if (n==0)
    {
        cout << "el numero es cero" << endl;
    }

    return 0;
}
