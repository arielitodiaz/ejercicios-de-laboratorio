#include <iostream>

using namespace std;
int main(){
    int numero1, numero2 , dif ;

    cout << "ingrese numeros" << endl;
    cin >> numero1;
    cin >> numero2;
    if (numero1 > numero2){
            dif=numero1-numero2;
            cout << "la diferencia es: " << dif;
    }
    else{
        if(numero2>numero1){
            dif=numero2-numero1;
            cout << "la diferencia es:" << dif;
        }
    }
    return 0;
}
