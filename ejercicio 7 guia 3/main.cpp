#include <iostream>

using namespace std;

int main()
{
    float con=0,  sueldo, smax, prom, smin, suma;
    int i;
    cout << "BIENVENIDO" << endl;
    for(i=0; i<3; i++)
    {
        suma=suma+sueldo;
        cout << "ingrese el sueldo.." <<endl;
        cin >> sueldo;
        if(sueldo>50000)
        {
            con++;
        }
        else
        {
            if(i==0)
            {
                smax=sueldo;
                smin=sueldo;
            }
            else
            {
                if(sueldo>smax)
                {
                    smax=sueldo;
                }
                else
                {
                    if(sueldo<smin)
                    {
                        smin=sueldo;
                    }
                }
            }
        }

    }
    prom=suma/3;
    cout << "cantidad de sueldos mayores a 50.000$" <<endl;
    cout << con <<endl;
    cout << "el sueldo maximo es:" << smax<<endl;
    cout << "el sueldo minimo es:" << smin<<endl;
    cout << "el sueldo promedio es:" << prom <<endl;

    return 0;
}
