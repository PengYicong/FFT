#include "stdafx.h"
#include "Complex.h"

Complex::Complex()
{
	r = 0;
	i = 0;
}

Complex::Complex(double real, double image)
{
	r = real;
	i = image;
}


Complex::~Complex()
{
}

const double Complex::Real()
{
	return r;
}

const double Complex::Image()
{
	return i;
}

//void Complex::SetReal(const double real)
//{
//	r = real;
//}

Complex Complex::operator+(Complex &c)
{
	double realtemp = this->Real() + c.Real();
	double imagetemp = this->Image() + c.Image();
	return Complex(realtemp, imagetemp);
}

Complex Complex::operator-(Complex &c)
{
	double realtemp = this->Real() - c.Real();
	double imagetemp = this->Image() - c.Image();
	return Complex(realtemp, imagetemp);
}

Complex Complex::operator*(Complex &c)
{
	double realtemp = this->Real()*c.Real() - this->Image()*c.Image();
	double imagetemp = this->Image()*c.Real() + this->Real()*c.Image();
	return Complex(realtemp, imagetemp);
}

//Complex& Complex::operator=(Complex &c)
//{
//	r = c.Real();
//	i = c.Image();
//	return *this;
//}

void Complex::Print()
{
	std::cout << r << "+ j" << i;
}