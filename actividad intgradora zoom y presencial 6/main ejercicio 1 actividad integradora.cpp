#include<iostream>
using namespace std;

int main(){

    int cda, vdv, canterior, i, contadorigual=0;
    int contadorvolumen=0, acumulador=0, promedio, contadoralzaaccion=0, contadoralzatotal=0, mayordiferencia, diferencia, mayoraccion;
    bool bandera=0;
    float pc , pa;

            cout<<"Ingresar codigo de accion: ";
                cin>>cda;
            cout<<"Ingresar precio de apertura: ";
                cin>>pa;
            cout<<"Ingresar precio de cierre: ";
                cin>>pc;
            cout<<"Ingresar volumen de venta: ";
                cin>>vdv;

        while(cda!=0){

                canterior=cda;
                acumulador=0;
                contadorvolumen=0;

            while(cda==canterior && cda!=0){

                contadoralzaaccion=0;


               for(i=0; i<2; i++){

                cout<<i+1<<endl;

                cout<<"Ingresar precio de apertura: ";
                    cin>>pa;
                cout<<"Ingresar precio de cierre: ";
                    cin>>pc;
                cout<<"Ingresar volumen de venta: ";
                    cin>>vdv;

                if(pc>pa){
                    contadoralzaaccion++;
                }

                acumulador+= vdv;
                contadorvolumen++;

                if(pc==pa){
                    contadorigual++;
                }

               }

                diferencia=pc-pa;

                if(bandera==0){

                    mayordiferencia=diferencia;
                    mayoraccion=canterior;
                    bandera=1;
                }
                else{
                    if(diferencia>mayordiferencia){
                        mayordiferencia=diferencia;
                        mayoraccion=canterior;
                    }
                }

               cout<<"Ingresar codigo de accion: ";
                    cin>>cda;
            }

            if(contadoralzaaccion==5){
                contadoralzatotal++;
            }

            promedio=acumulador/contadorvolumen;
            cout<<endl<<"El promedio de volumen en el codigo de accion "<<canterior<< " es: "<<promedio<<endl;
        }

        cout<<"La cantidad de acciones totales que se registraron en alza fueron: "<<contadoralzatotal<<endl;
        cout<<"La mayor diferencia la tuvo la accion: "<<mayoraccion<<" y fue de "<<mayordiferencia<<endl;
        cout<<"La cantidad de cotizaciones iguales fueron: "<<contadorigual;





return 0;
}
