#pragma once
#include <cmath>
#include <stdio.h>
#include <iostream>
#include "Complex.h"

#define Pi 3.141592654

Complex ComplexExponential(double radius)
{
	double realtemp = cos(radius);
	double imagetemp = sin(radius);
	return Complex(realtemp, imagetemp);
}

Complex* FFT(double* data)
{

}