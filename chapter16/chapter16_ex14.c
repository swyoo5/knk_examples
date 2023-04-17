/*
Let shape be the structure tag declared in Ex13. Write functions that perform the following operations on a shape structure s passed as an argument:
(a) Compute the area of s.
(b) Move s by x units in the x direction and y units in the y direction, returning the modified version of s.(x and y are additional arguments to the function.)
(c) Scale s by a factor of c(a double value), returning the modified version of s.(c is an additional argument to the function.)
*/

struct shape {
	int shape_kind;		/* RECTANGLE or CIRCLE */
	struct point center; 	/* coordinates of center */
	union {
		struct {
			int height, widthl
		} rectangle;
		struct {
			int radius;
		} circle;
	} u;
} s;

// (a)
struct shape s;
int shape_area(struct shape s)
{
	if (s.shape_kind == RECTANGLE)
		return s.u.rectangle.width * s.u.rectangle.height;	
	else
		reuturn M_PI * s.u.circle.radius * s.u.circle.radius; 
}

// (b)
struct shape shape_move(struct shape s, int x, int y)
{
	s.center.x += x;
	s.center.y += y;

	return s;
}

// (c)
struct shape shape_scale(struct shape s, double c)
{
	if (s.shape_kind = RECTANGLE)
	{		
		s.u.rectangle.height *= c;
		s.u.rectangle.width *= c;
	} else
		s.u.circle.radius *= c;
 
	return s;
}


