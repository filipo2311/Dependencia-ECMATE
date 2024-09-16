#include "Ecu.h"


ECU::ECU(){
	a = 1;
	b = 0;
	c = 0;
}

ECU::ECU(double aa, double bb, double cc){
	a = aa;
	b = bb;
	c = cc;
}

 ECU::~ECU(){

 }

 double ECU::getA() { return a; }
 double ECU::getB() { return b; }
 double ECU::getC() { return c; }
 void ECU::setA(double aa) { a = aa; }
 void ECU::setB(double bb) { b = bb; }
 void ECU::setC(double cc) { c = cc; }

string ECU::toString(){
	stringstream s;
	s << a << "x2 + " << b << "x + " << c << " = 0 " << endl;
	return s.str();
}

bool ECU::esECU(){
	if (a != 0)
		return true;
	else
		return false;
}

double ECU::discrim() { return b * b - 4 * a * c; } // Calculo Discriminante

int ECU::numSolucion(){ 
	if (discrim() > 0) return 2; // Tiene 2 soluciones
	if (discrim() == 0) return 1;// Tiene 1 solucion
	else return 0;// No tiene solucion
}

double ECU::solUno() { return (-b + sqrt(discrim())) / (2 * a); }

double ECU::solDos(){ return (-b - sqrt(discrim())) / (2 * a); }