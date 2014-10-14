#include "FFT.h"

using namespace std;

//function to take user input for a complx array
void user_input(complx x[], int n)
{

	for (int i = 0; i < n; i++)
	{   cout<<endl<<"Point no. "<<i<<endl;
		cin>>x[i].real;
		cout<<"     "<<"i ";
		cin>>x[i].imag;
	}
}
	
int main(int argc, char **argv)
{
	int N;							//the no. of elements in input
	cout<<endl<<endl<<"Enter the no. of discreet points in the Input."<<endl;
	cin>>N;
	int k;	
	complx in[N], out[N];
	
	cout<<endl<<"Enter The input Signals."<<endl;
	cout<<"Enter the real and imaginary part of the "<<N<<" elements :"<<endl;									
	
	user_input(in, N);					//input values
	
	DFT(in, out, N);
	
	cout<<endl<<endl<<"Here is the output after DFT ::"<<endl;
	
	display(out, N);					//displaying output
	
	int option;
	
										//Giving a choice to perform IDFT on the output	
	cout<<endl<<"Do you want to perform a IDFT on the to check if the DFT computation is correct?";
	cout<<endl<<"Enter 1 for YES or 2 for EXIT. "<<endl;
	cin>>option;
	
	if (option == 1)
	{
		IDFT(out, in, N);
	
		cout<<endl<<endl<<"Here is the output after IDFT ::"<<endl;
			
		display(in, N);		
	
	}
	
	else
	{ 
		goto exit;
	}
 
 exit:	
	cout<<endl<<"Thankyou for using the Program. I will now exit."<<endl<<endl;
	
	return 0;	
		
}
