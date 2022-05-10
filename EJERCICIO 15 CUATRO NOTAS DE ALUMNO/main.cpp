#include <iostream>

using namespace std;

int main()
{
    int n1, n2, n3, n4 ;
    int r=0;
    int rec=0;
    cout << "ingrese notas"<<endl;
    cin >> n1;
    cin >> n2;
    cin >> n3;
    cin >> n4;
    if (n1>=7&&n2>=7&&n3>=7&&n4>=7){
        cout << "promociona";
    }
    else{
        if(n1>=4){
            r++;
        }
        else{
            rec++;
        }
        if (n2>=4){
            r++;
        }
        else{
            rec++;
        }
        if(n3>=4){
            r++;
        }
        else{
            rec++;
        }
        if (n4>=4){
            r++;
        }
        else{
            rec++;
        if(r>=3){
            cout << "rinde final"<<endl;
        }
        else{
            if(r>=1){
                cout << "recupera parcial";
            }
            else{
                if(rec=4){
                    cout << "recursa materia";
                }
            }

        }
    }
    return 0;
    }
}
