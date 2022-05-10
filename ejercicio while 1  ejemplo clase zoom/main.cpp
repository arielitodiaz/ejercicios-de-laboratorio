// apartir de una lista de numeros que finaliza cuando se ingresa un numero
//negativo . calcular la cantidad de numeros pares ingresados
// nota: el numero que finaliza la lista  debe ser tenido en cuenta, eventualmente como par**


#include <iostream>

using namespace std;

int main()
{ int n, par=0 ;
    cout << "ingrese numeros :" <<endl;
    cin >> n;

    while(n>=0){
            if(n%2==0){
                par++;
            }

        cout << "ingrese numero" <<endl;
        cin >> n;
    }
    cout << "----------------------------" <<endl;
    cout << "la cantidad de pares es:" << par <<endl;



    return 0;
}
