#include <iostream>

using namespace std;
int n1, n2, n3, n4, n5;

int main(){
    cout << "INGRESE LOS NUMEROS" <<endl;
    cin >> n1;
    if (n1>0){
        cout << n1 << "es positivo";
    }
    else {
        cout << n1 << "es negativo";
    }
    return 0;
}
