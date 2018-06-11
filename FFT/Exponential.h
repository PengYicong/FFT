#pragma once
#include <cmath>
#include <iostream>
#include "Complex.h"

#define Pi 3.141592654

Complex ComplexExponential(double radius)
{
	double realtemp = cos(radius);
	double imagetemp = sin(radius);
	return Complex(realtemp, imagetemp);
}

//Complex* FFT_Non_Recur(double* data, int Length)
//{
//	Complex* Xk = new Complex[Length];
//	for (int i = 0; i < Length; i++)
//	{
//
//	}
//}

