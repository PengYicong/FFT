#include "stdafx.h"
#include "TDFFT.h"


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
}


TDFFT::~TDFFT()
{
}
