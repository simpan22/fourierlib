#include "FFT.h"
#include "complex.h"
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
	complx a, b, c;
	a = makeComplx(-1, 0);
	b = makeComplx(3, 3);
	c = add(a, b);
	printComplx(c);
	
	return 0;	
		
}
