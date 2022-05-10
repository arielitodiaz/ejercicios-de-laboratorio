#include <iostream>

using namespace std;
int A, B, AUX; 



int main() {
	cout << "BIENVENIDO" << endl;
	cout << "por favor ingrese los numeros que desea invertir" << endl;
	cin >> A >> B;
	AUX = A;
	A = B;
	B = AUX;

	cout << A << endl;
	cout << B << endl;








	cin.get(); 
	return 0;
}