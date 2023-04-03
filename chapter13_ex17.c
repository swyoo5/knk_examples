#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

/*
Write the following function :
bool test_extension(const char *file_name, const char *extension);

file_name points to a string containing a file name. The function should return true if the file's extension matches the string pointed to by extension, ignoring the case of letters. For example, the call test_extension("memo.txt", "TXT") would return true. Incorporate the "search for the end of a string" idiominto your function.
*/

bool test_extension(const char *file_name, const char *extension)
{
	while (*file_name != '.' && *file_name != '\0')
	{
		file_name++;
	}

	if (*file_name == '\0')
	{
		return false;
	}

	file_name++;

	while (toupper(*file_name) == toupper(*extension))
	{
		if (*file_name == '\0')
		{
			return true;
		}
		file_name++; extension++;
	}
	return false;	
}
