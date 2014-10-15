#ifndef _COMPLEX_H_
#define _COMPLEX_H_
#include <cmath>

//creating a custom data type for complex no.
//The discreet point signal set is represented here as an
//	array of complx data types.
struct complx							
{				
	double real;
	double imag;
};


complx makeComplx(double r, double i);
complx add(complx a, complx b);
complx sub(complx a, complx b);
void printComplx(complx a);

double arg(complx a);
double abs(complx a);


#endif

