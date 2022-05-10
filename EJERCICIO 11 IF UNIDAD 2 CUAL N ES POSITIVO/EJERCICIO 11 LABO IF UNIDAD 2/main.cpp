#include <iostream>

using namespace std;

int main(){
    int a, b, c, d, e;
    int co=0;
    cout << "BIENVENIDO" << endl;
    cout << "ingrese el primer numero..." <<endl;
    cin >> a;
    cout << "ingrese el segundo numero..." <<endl;
    cin >> b;
    cout << "ingrese el tercer numero..." <<endl;
    cin >> c;
    cout << "ingrese el cuarto numero..." <<endl;
    cin >> d;
    cout << "ingrese el quinto numero..." <<endl;
    cin >> e;
    if (a>0){{
        co=co+1;
    }
    if(b>0){
        co=co+1;
    }
    if(c>0){
        co=co+1;
    }
    if(d>0){
        co=co+1;
    }
    if(e>0){
        co=co+1;
    }
    cout << "los  numeros positivos son :" << co << endl;
    }
    else{
        cout << " ningun numero es positivo" <<endl;
    }

    return 0;
}
