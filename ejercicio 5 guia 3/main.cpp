#include <iostream>

using namespace std;

int main()
{ int n, v, i, c=0;
    cout << "ingrese cantidad de numeros  en la lista .." << endl;
    cin >> n;
    for (i=1; i<=n; i++){
            cout << "ingrese el valor:" << endl;
        cin >> v;
        if(v>0){
            c++;
        }
    }
    cout << "los numeros positivos son:"<< c <<endl;
    return 0;
}
