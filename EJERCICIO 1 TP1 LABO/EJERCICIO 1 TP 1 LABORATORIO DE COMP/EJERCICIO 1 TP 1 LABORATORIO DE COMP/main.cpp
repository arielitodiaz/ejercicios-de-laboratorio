#include <iostream>
using namespace std;

float canthora;
float valordehora;
float sueldoneto;





int main() {
	cout << "bienvenido... " << endl;
	cout << "por favor ingrese la cantidad de horas trabajadas..." << endl;
	cin  >> canthora;
	cout << "ingrese por favor el valor por hora..." << endl;
	cin >> valordehora;

	sueldoneto = canthora * valordehora; 

	cout << "el sueldo a cobrar es de : $" << sueldoneto;



	cin.get();
	return 0;
}