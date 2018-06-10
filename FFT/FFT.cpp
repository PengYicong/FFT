// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Complex.h"
#include "Exponential.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Complex a = Complex();
	Complex b = Complex(1, 2);
	Complex c = Complex(3, 4);

	std::cout << "a = ";
	a.Print();
	std::cout << std::endl;
	std::cout << "b = ";
	b.Print();
	std::cout << std::endl;
	std::cout << "c = ";
	c.Print();
	std::cout << std::endl;
	a = b;
	std::cout << "Now a = ";
	a.Print();
	std::cout << std::endl;
	a = ComplexExponential(Pi);
	a.Print();
	std::cin.get();
	return 0;
}
