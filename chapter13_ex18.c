#include <stdio.h>
#include <string.h>

/*
Write the following function:

void remove_filename(char *url);

url points to a string containing a URL that ends with a file name(such as "http://www.knking.com/index.html"). The function should modify the string by removing the file name and the preceding slash.(In this example, the result will be http://www.knking.com".) Incorporate the "search for the end of a string" idion into your function.
*/

void remove_filename(char *url)
{
	char *p;

	p = strrchr(url, '/');

	*p = '\0';	
}
