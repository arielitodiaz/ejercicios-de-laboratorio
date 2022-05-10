#include <iostream>

using namespace std;

int main()
{
    int a, b, maximo, minimo;
    cout << "ingrese dos números por favor..." << endl;
    cin >>  a;
    cin >>  b;
    if (a>b){
         maximo=a;
         minimo=b;
    }
    else{
        maximo=b;
        minimo=a;
    }
    for (int i=minimo; i<=maximo; i++){
        cout << i<<endl;
    }
    return 0;
}
