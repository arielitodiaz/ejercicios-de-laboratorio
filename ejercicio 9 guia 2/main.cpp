
// hacer un prg para ingresar 3 numero y listar el
//maximo de ellos //

#include <iostream>

using namespace std;

int main(){
    int a, b, c, maximo=0;
    cout << "ingrese el primer numero" << endl;
    cin >> a;
    cout << "ingrese el segundo numero" << endl;
    cin >> b;
    cout << "ingrese el tercer numero" << endl;
    cin >> c;
    if (a>b){
        maximo=a;
    }
    if (b>a){
        maximo=b;
    }
    if (c>maximo){
        maximo=c;
    }
    cout << "el numero maximo es:" << maximo <<endl;

    return 0;
}
