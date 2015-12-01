typedef struct 
{
	int numerator;
	unsigned int denominator;
} Fraction;

Fraction sum(Fraction *f1, Fraction *f2);
void print(Fraction *f);