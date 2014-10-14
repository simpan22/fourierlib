/*
This Program performs FFT and IDFT on a given set of discreet signal.
- Shashank Shekhar
- http://4errors.com
*/


#include <cmath>
#include <iostream>

using namespace std;

  									//creating a custom data type for complex no.
struct complx							//The discreet point signal set is represented here as an
{										//	array of complx data types.
	double real;
	double imag;
};				
										//function computes DFT for in[] and stores in out[].
										//N is the no. of elements in in[] .
void DFT(complx in[], complx out[], int N) 
{
	int x, y;
	
										//this loop will compute each output element.
	for (x = 0; x < N; x++) 
	{	
		complx summation;
		summation.real = 0; summation.imag = 0;
		
										//loop for summation from i=0 to i=N.
		for (y = 0; y < N; y++) 
		{			
			summation.real+= in[y].real*cos(2*M_PI*y*x/N)+in[y].imag*sin(2*M_PI*y*x/N);
			summation.imag+=-in[y].real*sin(2*M_PI*y*x/N)+in[y].imag*cos(2*M_PI*y*x/N);
		}
		
		out[x] = summation;
	}
}

										//function computes IDFT for in[] stores output to out[]
										//N is the no. of elements in in[]
void IDFT(complx in[], complx out[], int N) 
{
	int i;
									
	for (i = 0; i < N; i++) 
	{	
		in[i].imag *= -1;				//changing the sign of imaginary part
	}
	
	DFT(in, out, N);					//performing SFT function
	for (i = 0; i < N; i++) 
	{	
		out[i].real = out[i].real/N;	//dividing the time domain by N
		out[i].imag = -out[i].imag/N;	//and also changing the sign of the imaginary part
	}
	
}

										//Function to diplay the contents of an array of complx
void display(complx x[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout<<x[i].real;
		cout<<"     "<<"i ";
		cout<<x[i].imag;
		cout<<endl<<endl;
	}
}





