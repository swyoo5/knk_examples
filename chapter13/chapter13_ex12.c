#include <stdio.h>

/*
Write the following function :
void get_extension(const char *file_name, char *extension);
file_name points to a string containing a file name. The function should store the extension on the file name in the string pointed to by extension. For example, if the file name is "memo.txt", the function will store "txt" in the string pointed to by extension. If the file name doesn't have an extension, the function should store an empty string(a single null character) in the string pointed to by extension. Keep the function as simple as possible by having it use the strlen and strcpy functions.
*/

void get_extension(const char *file_name, char *extension)
{
	while (*file_name++ != '.');

	while (*file_name)
	{
		if (*file_name == '.')
		{
			strcpy(extension, file_name);
			return;
		}
	}
	strcpy(extension, "");
}
