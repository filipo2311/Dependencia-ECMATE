#include "Matem.h"
#include "Ecu.h"

#pragma once

bool Matem::esECU(double aa) {
	if (aa != 0)
		return true;
	else
		return false;
}

double Matem::discrim(double aa, double bb, double cc) {
	return bb * bb - 4 * aa * cc;
}
int Matem::numSolucion(double aa, double bb, double cc) {

	if (discrim(aa ,bb, cc) > 0) return 2; // Tiene 2 soluciones
	if (discrim(aa, bb, cc) == 0) return 1;// Tiene 1 solucion
	else return 0;// No tiene solucion
}

double Matem::solUno(double aa, double bb, double cc) { return (-bb + sqrt(discrim(aa, bb, cc))) / (2 * aa); }

double Matem::sol2(double aa, double bb, double cc) { return (-bb - sqrt(discrim(aa, bb, cc))) / (2 * aa); }


