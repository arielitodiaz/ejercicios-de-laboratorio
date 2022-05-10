#include <iostream>

using namespace std;

int main()
{int a, b, c, d, e, f, g, h, n;
    cout << "BIENVENIDO TILIN" << endl;
    for(int i=1;i<=8;i++){
        cout << "ingrese valor..." <<endl;
        cin >>a;
        if(i==1){
            a=n;
        }
        else{
            if(i==2){
                b=n;
            }
            else{
                if(i==3){
                    c=n;
                }
                else{
                    if(i==4){
                        d=n;
                    }
                    else{
                        if(i==5){
                            e=n;
                        }
                        else{
                            if(i==6){
                                f=n;
                            }
                            else{
                                if(i==7){
                                    g=n;
                                }
                                else{
                                    if(i==8){
                                        h=n;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if(a<=b&&b<=c&&c<=d&&d<=e&&e<=f&&f<=g&&g<=h){
        cout << "conjunto ordenado" <<endl;
    }
    else{
        cout << "conjunto desordenado" <<endl;
    }
    return 0;
}
