#include<iostream>
using namespace std;

int main(){
int ideprot, nivel_sod;
float lit_muestra, determ_ph, nivel_plat;
int promedio , cant_prot_apto=0, suma_litros=0, cant_prot_total;
    cout << "ingrese litros de muestra :" <<endl;
    cin >> lit_muestra;
    cout << "ingrese el id de protocolo :" <<endl;
    cin >> ideprot;
    cout << "ingrese el sodio : " <<endl;
    cin >> nivel_sod;
    cout << "ingrese el nivel d platino :" <<endl;
    cin >> nivel_plat;
    cout << "determine el nivel de PH :" <<endl;
    cin >> determ_ph;
    while(ideprot!=0){
            lit_muestra+=suma_litros;
            cant_prot_total++;
        if(nivel_sod>=0&&nivel_sod<=150){
            if(nivel_plat>=0.2&&nivel_plat<=12){
                if(determ_ph>=6.5&&determ_ph<=8.5){
                    cant_prot_apto++;
                }
            }
            else{
                if(nivel_plat> 12){
                    cout << "el numero de protocolo no apto es : " << ideprot <<endl;
                    cout << "y su cantidad de ph es : " << determ_ph <<endl;
                }
            }
        }
        promedio= suma_litros/cant_prot_total;


        cout << "ingrese nuevamente datos , para  un nuevo registro : " <<endl;
    cout << "ingrese litros de muestra :" <<endl;
    cin >> lit_muestra;
    cout << "ingrese el id de protocolo :" <<endl;
    cin >> ideprot;
    cout << "ingrese el sodio : " <<endl;
    cin >> nivel_sod;
    cout << "ingrese el nivel d platino :" <<endl;
    cin >> nivel_plat;
    cout << "determine el nivel de PH :" <<endl;
    cin >> determ_ph;
    }

    cout << "la cantidad de protocolos apto para consumo de agua es: " << cant_prot_apto <<endl;
    cout << "los indices mas alto de PH son :" << determ_ph << endl;
    cout << "el numero de protocolo con el nivel mas alto en platino es :" << ideprot <<endl;
    cout << "el promedio de litros ingresados para las muestras es : " <<promedio<< "litros" <<endl;


return 0;
}
