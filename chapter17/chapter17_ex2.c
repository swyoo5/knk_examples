/*
Write a function named duplicate that uses dynamic storage allocation to create a copy of a string. For example, the call
p = duplicate(str);
would allocate space for a string of the same length as str, copy the contents of str into the new string, and return a pointer to it. Have duplicate return a null pointer if the memory allocation fails.
*/

char *duplicate(char *str)
{
	char *new_string = (char *) malloc(strlen(s) + 1);

	if (new_string == NULL){
		printf("Error : malloc failed");
		exit(EXIT_FAILURE);	
	}

	strcpy(new_string, str);
	return new_string;
}
