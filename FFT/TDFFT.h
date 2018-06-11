#pragma once
#include <cmath>
#include <iostream>
#include "Complex.h"
class TDFFT
{
private:
	Complex * xk;
	double* xn;
	int length;
public:
	TDFFT(double* data, int size);
	~TDFFT();
	Complex* FFT_Iter();
	
};

