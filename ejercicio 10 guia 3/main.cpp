#include <iostream>

using namespace std;

int main()
{ int n, band=0, imp_uno, imp_dos;
    cout << "BIENVENIDO" << endl;
    for(int i=0;i<7;i++){
        cout << "ingrese valor..." <<endl;
        cin >>n;
        if(n%2!=0){
            if(band==0){
                imp_uno=n;
                band=1;
            }
            else{
                if(n%2!=0){
                    imp_dos=n;
                }
            }
        }
    }
    cout << "el primer numero impar es:" <<imp_uno <<endl;
    cout << "el segundo numero impar es:" <<imp_dos <<endl;
    return 0;
}
