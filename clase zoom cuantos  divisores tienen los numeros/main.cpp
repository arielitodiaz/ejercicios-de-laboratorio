#include <iostream>

using namespace std;

int main()
{ int cdiv, num, i, cpri=0;
    for (num=1; num<=100; num++){
        cdiv=0;
        for(i=1;i<=num; i++){
            if(num %i==0){
                cdiv++;
            }
        }
        if(cdiv ==2){
            cpri++;
        }
    }
    cout << "cantidad de primos" << cpri << endl;
    return 0;
}
