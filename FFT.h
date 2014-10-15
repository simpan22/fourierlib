#ifndef _FFT_H_
#define _FFT_H_
#include <cmath>
#include <iostream>

#include "complex.h"
		
//function computes DFT for in[] and stores in out[].
//N is the no. of elements in in[] .
void DFT(complx in[], complx out[], int N);

//function computes IDFT for in[] stores output to out[]
//N is the no. of elements in in[]
void IDFT(complx in[], complx out[], int N);

//Function to diplay the contents of an array of complx
void display(complx x[], int n);
#endif
