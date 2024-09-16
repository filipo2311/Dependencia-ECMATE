#pragma once
#include <iostream>
#include <sstream>

using namespace std;

class ECU {

private: //ax2 +bx + c

	double a, b, c;

public:
	ECU();
	ECU(double, double, double);
	virtual ~ECU();
	double getA();
	double getB();
	double getC();
	void setA(double);
	void setB(double);
	void setC(double);
	string toString();
	bool esECU();
	double discrim();
	int numSolucion();
	double solUno();
	double solDos();

};