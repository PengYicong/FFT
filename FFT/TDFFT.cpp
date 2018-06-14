#include "stdafx.h"
#include "TDFFT.h"
#include "Complex.h"

#define Pi 3.141592653

TDFFT::TDFFT(double* data,int size)
{
	if (size%2 == 0)
	{
		xk = new Complex[size + 1];
		xn = new double[size + 1];
		for (int i = 0; i < size; i++)
		{
			xn[i] = data[i];
		}
		xn[size + 1] = 0;
	}
	else
	{
		xk = new Complex[size];
		xn = new double[size];
		for (int i = 0; i < size; i++)
		{
			xn[i] = data[i];
		}
	}
	length = size;
}


TDFFT::~TDFFT()
{
	delete []xk;
	delete []xn;
}

Complex TDFFT::ComplexExponential(double radius)
{
	double realtemp = cos(radius);
	double imagetemp = sin(radius);
	return Complex(realtemp, imagetemp);
}

Complex* TDFFT::FFT_Iter()
{
	for (int k = 0; k < length; k++)
	{
		Complex temp1 = Complex(0,0);
		
		for (int n = 0; n < length; n++)
		{
			Complex Comp_xnn = Complex(xn[n], 0);
			Complex exp = ComplexExponential(2 * n*Pi / length);
			//Complex temp = Complex(0,0);
			Complex temp = Comp_xnn * exp;
			temp1 = temp + temp1;
		}
		xk[k] = temp1;
	}
	return xk;
}