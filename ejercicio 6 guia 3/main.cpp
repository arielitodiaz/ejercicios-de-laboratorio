#include <iostream>

using namespace std;

int main()
{ int pos=0, neg=0, cero=0, v;
    for(int i=1; i<=10; i++){
        cout << "ingrese valor:" <<endl;
        cin >> v;
        if(v>0){
            pos++;
        }
        else {
            if(v<0){
                neg++;
            }
            else{
                cero++;
            }
        }
    }
    cout << "los numeros positivos son:" << pos <<endl;
    cout << "los numeros negativos son:" << neg <<endl;
    cout << "los numeros ceros     son:" << cero<<endl;
    return 0;
}

