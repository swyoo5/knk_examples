/*
The following structures are designed to stroe information about objects on a graphics screen :
struct point {int x, y;};
struct rectangle {struct point upper_left, lower_right;};

A point structure stores the x and y coordinates of a point on the screen. A rectangle structure stores the coordinates of the upper left and lower right corners of a rectangle. Write functions that perform the following operations on a rectangle structure r passed as an argument:

(a) Compute the area of x.
(b) Compute the conter of r, returning it as a point value. If either the x or y coordinate of the center isn't an integer, store its truncated value in the point structure.
(c) Move r by x units in the x direction an y units in the y direction, returning the modified version of r.(x and y are additional arguments to the function.)
(d) Determine whether a point p lies within r, returning true of false.(p is an additional argument of type struct point.)
*/

// (a)
int area_of_rectangle(struct rectangle r)
{
	return (r.upper_left.y - r.lower_right.y) * (r.lower_right.x - r.upper_left.x);
}

// (b)
struct point center_of_rectangle(struct rectangle r)
{
	struct point center;

	center.x = (int) (r.upper_left.x + r.lower_right.x) / 2;
	center.y = (int) (r.upper_left.y + r.lower_right.y) / 2;

	return center;
}

// (c)
struct rectangle move_rectangle(struct rectangle r, int x, int y)
{
	r.upper_left.x += x;
	r.upper_left.y += y;
	r.lower_right.x += x;
	r.lower_right.y += y;

	return r;
}

// (d)
bool in_rectangle(struct rectangle r, struct point p)
{
	return (p.x > r.upper_left.x && p.x < r.lower_right.x && p.y > lower_right.y && p.y < upper_left.y);
}
