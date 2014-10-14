#include <cmath>
#include <iostream>

//creating a custom data type for complex no.
//The discreet point signal set is represented here as an
//	array of complx data types.
struct complx							
{				
	double real;
	double imag;
};
		
//function computes DFT for in[] and stores in out[].
//N is the no. of elements in in[] .
void DFT(complx in[], complx out[], int N);

//function computes IDFT for in[] stores output to out[]
//N is the no. of elements in in[]
void IDFT(complx in[], complx out[], int N);

//Function to diplay the contents of an array of complx
void display(complx x[], int n);
