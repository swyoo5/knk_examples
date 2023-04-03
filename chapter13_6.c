#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define PLANET_NUM 9

int main(int argc, char *argv[])
{
	char *planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};

	int i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < PLANET_NUM; j++)
		{
			if (strcmp(toupper(argv[i]), toupper(planets[j])) == 0)		
			{
				printf("%s is planet %d\n", argv[i], j+1);
				break;
			}
		}
		if (j == PLANET_NUM)
		{
			printf("%s is not a planet\n", argv[i]);	
		}
	}
	return 0;
}
