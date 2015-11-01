#include "Fraction.h"

Fraction sum(Fraction *f1, Fraction *f2)
{
	Fraction result;
	result.numerator = f1->numerator * f2->denominator 
		+ f2->numerator * f1->denominator;
	result.denominator = f1->denominator * f2->denominator;
	return result;
}

void shorten(Fraction *f)
{
	//Что-то....
}

void print(Fraction *f)
{

}