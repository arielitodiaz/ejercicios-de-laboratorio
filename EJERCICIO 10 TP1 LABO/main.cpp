#include <iostream>

using namespace std;

int cantHS, dias;
float hs;
int main(){
    cout <<"ingrese la cantidad de horas ..."<< endl;
    cin >> cantHS;

    dias=(cantHS/24);
    hs=(dias%60);

    cout << "la cantidad de horas equivale a:" << dias << "dias y" <<hs <<"horas" <<endl;

return 0;
}
