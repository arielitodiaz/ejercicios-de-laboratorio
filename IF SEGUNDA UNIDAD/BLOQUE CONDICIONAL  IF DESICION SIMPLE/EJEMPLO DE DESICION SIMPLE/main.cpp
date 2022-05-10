#include <iostream>
using namespace std;
#include<cstdlib>


int main(){
 int numero ;
    cout << "ingrese numero ";
    cin >> numero;
    if (numero>0){
            cout << "el numero es positivo" ;
    }
    else
        if (numero==0){
        cout << "el numero es igual a cero ";
    }
    else {
        cout << "el numero es negativo";
    }



  return 0;
}

