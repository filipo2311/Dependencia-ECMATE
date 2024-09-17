#include "Ecu.h"
//Hacer La interfaz (Tipo 2)
int main() {

	int op;
	double a, b, c;
	ECU* ecu = new ECU; //Constructor por defecto (1, 0, 0)

	do {
		
		cout << "-----------Trabajando con Ecuaciones Cuadraticas----------" << endl;
		cout << "----------- MENU -------------" << endl;
		cout << "1- Cambiar Coef Numericos de la ecuacion " << endl;
		cout << "2- Saber si la ecuacion cuadratica existe " << endl;
		cout << "3- Imprimir la ecuacion Cuadratica " << endl;
		cout << "4- Obtener e imprimir el discriminante " << endl;
		cout << "5- Obtener e imprimir num Soluciones " << endl;
		cout << "6- Imprimr sol 1 " << endl;
		cout << "7- Imprimr sol 2 " << endl;
		cout << "8- Salir " << endl;
		cout << "Digite la opcion: " << endl;
		cin >> op;

		switch (op) {
		case 1: {
			cout << "Cambiar Coeficientes Numericos" << endl;
			cout << "Ingrese a:";
			cin >> a;
			cout << "Ingrese b:";
			cin >> b;
			cout << "Ingrese c:";
			cin >> c;
			ecu->setA(a);
			ecu->setB(b);
			ecu->setC(c);

		} break;

		case 2: {
			cout << "Saber si la Ecu es verdadera" << endl;
			if (ecu->esECU() == true)
				cout << "Es verdadera";
			else cout << "Es falsa.";

		} break;
		
		case 3: {
			cout << "Imprimir la Ecuacion cuadratica" << endl;
			cout << ecu->toString() << endl;
		} break;

		case 4: {
			cout << "Obtener e imprimir el discrim" << endl;
			if (ecu->esECU() == true) {
				cout << "El discriminante es: ";
				cout << ecu->discrim() << endl;
			}
			else {
				cout << "no es una ecu discr" << endl;
			} break;
		}
		case 5: {
			cout << "obtiene e impr num de solucion" << endl;
			if (ecu->esECU() == true) {
				cout << "El numero de solucion es de:" << endl;
				cout << ecu->numSolucion() << endl;
			}
			else {
				cout << "no es una ecu discr" << endl;
			} break;
		}
		case 6: {
			cout << "Imprimr sol 1 " << endl;
			if (ecu->esECU() == true) {
				if (ecu->numSolucion() >= 1) {
					cout << "La solucion num 1 es:" << endl;
					cout << ecu->solUno() << endl;
				}
			}
			else {
				cout << "La ecuacion no tiene solucion" << endl;
			} break;
		}
		case 7: {
			cout << "Imprimr sol 2 " << endl;
			if (ecu->esECU() == true) {
				if (ecu->numSolucion() == 2) {
					cout << "La solucion num 2 es:" << endl;
					cout << ecu->solDos() << endl;
				}
				else {
					cout << "La ecuacion no tiene solucion 2" << endl;
				} break;
			}
		}
		case 8: {
			system("cls");
			cout << "Muchas Gracias.." << endl;
		} break;


		}
	} while (op != 8);







		system("pause");
		return 0;

	}

