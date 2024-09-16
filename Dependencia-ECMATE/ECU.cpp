#include "Ecu.h"
#include "Matem.h"

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
	return Matem::esECU(a);
}

double ECU::discrim() { return Matem::discrim(a, b, c); } // Calculo Discriminante

int ECU::numSolucion(){ 
	return Matem::numSolucion(a, b, c);
}

double ECU::solUno() { return Matem::solUno(a,b,c); }

double ECU::solDos(){ return Matem::sol2(a, b, c);}