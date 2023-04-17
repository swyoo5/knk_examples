/*
Write the following functions. (The color structure is defined in Excercise 8.)
(a) struct color make_color(int red, int green, int blue);
Returns a color structure containing the specified red, green, and blue values. If any argument is less than zero, the corresponding member of the structure will contain zero instead. If any argument is greater than 255, the corresponding member of the structure will contain 255.
*/

struct color make_color(int red, int green, int blue)
{
	if (red < 0)
		red = 0;
	else if (red > 255)
		red = 255;
	if (green < 0)
		green = 0;
	else if (green > 255)
		green = 255;
	if (blue < 0)
		blue = 0;
	else if (blue > 255)
		blue = 255;

	return (struct color) {red, green, blue};	
}

/*
(b) int getRed(struct color c);
Returns the value of c's red member.
*/

int getRed(struct color c)
{
	return c.red;
}

/*
(c) bool equal_color(struct color color1, struct color color2);
Returns true if the corresponding numbers of color1 and color2 are equal.
*/

bool equal_color(struct color color1, struct color color2)
{
	if (color1.red == color2.red && color1.green == color2.green && color1.blue == color2.blue)
	{
		return true;
	}
	return false;
}

/*
(d) struct color brighter(struct color c);
Returns a color structure that represents a brighter version of the color c. The structure is identical to c, except that each member has been divided by 0.7(with the result truncated to an integer). However, there are three special cases: (1) If all members of c are zero, the function returns a color whose members all have the value 3. (2) If any member of c is greater than 0 but less than 3, it is replaced by 3 before the division by 0.7. (3) If dividing by 0.7 causes a member to exceed 255, it is reduced to 255.*/

struct color brighter(struct color c)
{
	if (c.red == 0 && c.green == 0 && c.blue == 0)
	{	
		c.red = 3;
		c.green = 3;
		c.blue = 3;

		return c;
	}

	if (c.red > 0 && c.red < 3)
	{
		c.red = 3 / 0.7;
	}

	if (c.blue > 0 && c.blue < 3)
	{
		c.blue = 3 / 0.7;
	}

	if (c.green > 0 && c.green < 3)
	{
		c.green = 3 / 0.7;
	}
	
	make_color(c);
	return c;
}

/*
(e) struct color darker(struct color c);
Returns a color structure that represents a darker version of the color c. The structure is identical to c, except that each member has been multiplied by 0.7(with the result truncated to an integer).
*/

struct color darker(struct color c)
{
	c.red *= 0.7;
	c.green *= 0.7;
	c.blue *= 0.7;

	return c;
}

