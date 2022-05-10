// apartir de una lista de numeros que finaliza cuando se ingresa un numero
//negativo . calcular la cantidad de numeros pares ingresados
// nota: el numero que finaliza la lista  debe ser tenido en cuenta,
//eventualmente como par**


#include <iostream>

using namespace std;

int main()
{ int n, par=0 ;
   do{
        cout << "numero: ";
        cin >> n;

        if(n%2==0){
            par++;
        }

   }while(n>=0);
    cout << "----------------------------" <<endl;
    cout << "la cantidad de pares es:" << par <<endl;



    return 0;
}
