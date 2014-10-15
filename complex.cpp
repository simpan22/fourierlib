#include "complex.h"
#include <iostream>
using namespace std;

complx add(complx a, complx b)
{
	complx ret;
	ret.real = a.real + b.real;
	ret.imag = a.imag + b.imag;
	return ret;
}

complx sub(complx a, complx b)
{
	complx ret;
	ret.real = a.real - b.real;
	ret.imag = a.imag - b.imag;
	return ret;
}

complx makeComplx(double r, double i)
{
	complx ret;
	ret.real = r;
	ret.imag = i;
	return ret;
}

double arg(complx a)
{
	if(a.real == 0 && a.imag == 0)
	{
		return 0;
	}
	return atan2(a.imag, a.real);
}

double abs(complx a)
{
	return sqrt((a.real*a.real) + (a.imag*a.imag));
}

void printComplx(complx a)
{
	cout << a.real << "+" << a.imag << "i" << endl;
}
