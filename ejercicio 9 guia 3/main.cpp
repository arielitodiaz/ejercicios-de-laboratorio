
#include <iostream>
using namespace std;


int main()
{ int n, bandp=0, bandn=0, minimo, maximo;
    cout << "BIENVENIDO" << endl;
    for (int i=0;i<10;i++){
        cout << "ingrese valor..." <<endl;
        cin >>n;
        if(n>0){
            if(bandp==0){
                minimo=n;
                bandp=1;
            }
            else{
                if(n<minimo){
                    minimo=n;
                }
            }
        }
        else{
            if(bandn==0){
                maximo=n;
                bandn=1;
            }
            else{
                if(n>maximo){
                    maximo=n;
                }
            }
        }
    }
    cout <<"el maximo de los n° negativos es:" << maximo <<endl;
    cout <<"el minimo de los n° positivos es:" << minimo <<endl;
    return 0;
}
