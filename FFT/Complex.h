#pragma once
#include <stdio.h>
#include <iostream>
class Complex
{
private:
	double r;
	double i;
public:
	Complex();
	Complex(double real, double image);
	~Complex();
	const double Real();
	const double Image();
	//void SetReal(const double real);
	//void SetImage(const double image);
	Complex operator+(Complex &c);
	Complex operator-(Complex &c);
	Complex operator*(Complex &c);
	//Complex& operator=(Complex &c);
	void Print();
};

