#include <iostream>

using namespace std;

int main()
{ int leg, legmax;
  float sueldo, smax;
  cout << "BIENVENIDO.." <<endl;
  for (int i=0;i<3;i++){
    cout << "ingrese legajo y sueldo correspondiente" <<endl;
    cin >> leg;
    cin >> sueldo;
    if (i==0){
        smax=sueldo;
        legmax=leg;
        }
        else{
            if (sueldo>smax){
                smax=sueldo;
                legmax=leg;
            }
        }
  }
  cout << "el legajo con mayor sueldo es:" <<legmax <<endl;
  cout << "y su sueldo es:" << smax <<endl;
    return 0;
}
