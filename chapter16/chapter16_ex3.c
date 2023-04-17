/*
(a) Show how to declare a tag named complex for a structure with two members, real and imaginary, of type double.
(b) Use the complex tag to declare variables named c1, c2, and c3.
(c) Write a function named make_complex that stores its two arguments (both of type double) in a complex structure, then returns the structure.
(d) Write a function named add_complex that adds the corresponding members of its arguments(both complex structures), then returns the result(another complex structure).
*/

// (a)
struct complex {
	double real, imaginary;
	};

// (b)
struct complex c1, c2, c3;

// (c)
struct complex make_complex(double real, double imaginary)
{
	return (struct complex) {real, imaginary};
}

// (d)
struct complex add_complex(const struct complex a, const struct complex b)
{
	return (struct complex) {a.real + b.real, a.imaginary + b.imaginary};
}
