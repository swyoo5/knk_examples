/*
Assume that the fraction structure contains two members: numerator and denominator(both of type int).
Write functions that perform the following operations on fractions:
(a) Reduce the fraction f to lowest terms.
(b) Add the fractions f1 and f2.
(c) Substract the fraction f2 from the fraction f1.
(d) Multiply the fractions f1 and f2.
(e) Divide the fraction f1 by the fraction f2.
The fractions f, f1, and f2 will be arguments of type struct fraction; each function will return a value of type struct fraction. The fractions returned by the functions in parts (b)-(e) should be reduced to lowest terms.
*/

// (a)
struct fraction {
	int numerator, denominator;
	};

struct fraction reduce_fraction(struct fraction f)
{
	int temp, n = f.numerator, d = f.denominator;

	while (n % d != 0)
	{
		temp = d;
		d = n % d;
		n = temp;
	}

	f.numerator /= d;
	f.denominator /= d;
	return f;
}

// (b)
struct fraction add_fraction(struct fraction f1, struct fraction f2)
{
	return reduce_fraction((struct fraction) {f1.numerator * f2.denominator + f2.numerator * f1.denominator, f1.denominator * f2.denominator});
}

// (c)
struct fraction substract_fraction(struct fraction f1, struct fraction f2)
{
	return reduce_fraction((struct fraction) {f1.numerator * f2.denominator - f2.numerator * f1.denominator, f1.denominator * f2.denominator});
}

// (d)
struct fraction multiply_fraction(struct fraction f1, struct fraction f2)
{
	return reduce_fraction((struct fraction) {f1.numerator * f2.numerator, f1.denominator * f2.denominator});
}

// (e)
struct fraction devide_fraction(struct fraction f1, struct fraction f2)
{
	return reduce_fraction((struct fraction) {f1.numerator * f2.denominator, f2.numerator * f1.denominator});
}
