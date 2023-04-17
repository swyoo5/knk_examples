/*
Repeat Exercise 3, but this time using a type named Complex.
(a) Show how to declare a tag named complex for a structure with two members, real and imaginary, of type double.
(b) Use the complex tag to declare variables named c1, c2, and c3.
(c) Write a function named make_complex that stores its two arguments (both of type double) in a complex structure, then returns the structure.
(d) Write a function named add_complex that adds the corresponding members of its arguments(both complex structures), then returns the result(another complex structure).
*/

// (a)
typedef struct{
	double real, imaginary;
} Complex;

// (b)
Complex c1, c2, c3;

// (c)
Complex make_complex(double real, double imaginary)
{
	return (Complex) {real, imaginary};
}

// (d)
Complex add_complex(Complex a, Complex b)
{
	return (Complex) {a.real + b.real, a.imaginary + b.imaginary};
} 
