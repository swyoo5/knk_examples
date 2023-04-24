/*
Write the following function :
int *create_array(int n, int initial_value);
The function should return a pointer to a dynamically allocated int array with n members, each of which is initialized to initial_value. The return value should be NULL if the array can't be allocated.
*/

int *create_array(int n, int initial_value){
	void *p, *i;

	if ((p = malloc(n * sizeof(int)) == NULL){
		printf("Error : malloc is failed");
		return NULL;
	}
	
	for (i = p; i < p + n; i++){
		*p = initial_value;
	}
	return p;	
}
